#include "FunctionCallNode.h"
#include <sstream>
#include <functional>
#include <cstring>
#include <iostream>

std::string FunctionCallNode::toString() {
    std::stringstream ss;
    ss << "FunctionCallNode(function name: "
        << functionName
        << "( ";

    for (const auto& arg : parameterNames) {
        ss << arg << " ";
    }

    ss << ") )";

    return ss.str();
}

ASTNode * FunctionCallNode::parse(TSNode &node, std::string_view code) {
    auto result = new FunctionCallNode();

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [result, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "function_identifier", strlen("function_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result->functionName = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "argument_declaration", strlen("argument_declaration")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result->parameterNames.emplace_back(code.substr(start, end - start));
        }
    });

    return result;
}
