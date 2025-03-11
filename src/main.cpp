#include <cstring>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <vector>

#include "tree_sitter/api.h"
#include "tree_sitter/parser.h"
#include <llvm/ADT/StringSwitch.h>

#include "ast/ASTNode.h"
#include "ast/LoadLibNode.h"
#include "ast/FunctionCallNode.h"
#include "ast/UnloadNode.h"
#include "ast/VariableNode.h"
#include "ast/PrintNode.h"

extern "C" const TSLanguage *tree_sitter_dyliblang();
using namespace llvm;

std::string readFile(std::filesystem::path path)
{
    // Open the stream to 'lock' the file.
    std::ifstream f(path, std::ios::in | std::ios::binary);

    // Obtain the size of the file.
    const auto size = file_size(path);

    // Create a buffer.
    std::string result(size, '\0');

    // Read the whole file into the buffer.
    f.read(result.data(), size);

    return result;
}

void writeToFile(std::filesystem::path path, std::string_view text) {
    auto outPath = path.replace_extension("out");
    std::cout << outPath << std::endl;
    std::ofstream f(outPath, std::ios::binary | std::ios::out);

    f.seekp(0, std::ios_base::end);

    f.write(text.data(), text.size());

    f.flush();
}

std::string parseNode(TSNode &node, std::string_view code) {
    auto astFunction = StringSwitch<std::function<std::string(TSNode&, std::string_view)>>(ts_node_type(node))
        .Case("load_statement", LoadLibNode::parse)
        .Case("variable_declaration", VariableNode::parse)
        .Case("function_call", FunctionCallNode::parse)
        .Case("print_statement", PrintNode::parse)
        .Case("unload_statement", UnloadNode::parse)
        .Default([](TSNode&, std::string_view){ return ""; });

    return astFunction(node, code);
}

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Please provide source file" << std::endl;
        return 1;
    }

    std::filesystem::path src = argv[1];

    std::string code = readFile(src);

    TSParser *parser = ts_parser_new();

    ts_parser_set_language(parser, tree_sitter_dyliblang());

    TSTree* tree = ts_parser_parse_string(parser, nullptr, code.c_str(), code.length());
    TSNode root = ts_tree_root_node(tree);

    auto nodesCount = ts_node_child_count(root);

    std::string resultCode = R"(
#include <dlfcn.h>
#include <string>
#include <functional>
#include <iostream>

int main() {
)";
    for (uint32_t i = 0; i < nodesCount; i++) {
        TSNode child = ts_node_child(root, i);
        auto node = parseNode(child, code);
        if (!node.empty()) {
            resultCode += node + "\n";
        }
    }

    resultCode += R"(
return 0;
}
)";

    writeToFile(src, resultCode);

    ts_tree_delete(tree);
    ts_parser_delete(parser);
    return 0;
}
