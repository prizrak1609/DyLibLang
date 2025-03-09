#include "TypeNode.h"

#include <sstream>
#include <functional>
#include <cstring>
#include <iostream>

using namespace llvm;

std::string TypeNode::toString() {
    std::stringstream ss;
    ss << "TypeNode( ";

    std::string llvmStr;

    if (type) {
        raw_string_ostream out(llvmStr);
        type->print(out);
    }

    ss << llvmStr << " )";

    return ss.str();
}

ASTNode * TypeNode::parse(TSNode &node, std::string_view code) {

    std::vector<TSNode> children = getChildren(node);

    std::for_each(children.begin(), children.end(), [](TSNode &child) {
        if (strncmp(ts_node_type(child), "function_type", strlen("function_type")) == 0) {
            // skip for now
        } else
        if (strncmp(ts_node_type(child), "cpp_type", strlen("cpp_type")) == 0) {
            // skip for now
        } else {
            // plain type
        }
    });

    return new TypeNode();
}
