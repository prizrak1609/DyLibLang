#include "TypeNode.h"

#include <sstream>
#include <functional>
#include <cstring>
#include <iostream>
#include "FunctionType.h"

std::string TypeNode::toString() {
    return "";
}

std::string TypeNode::parse(TSNode &node, std::string_view code, Type& type, const std::string& name) {
    std::string result;

    std::vector<TSNode> children = getChildren(node);
    std::for_each(children.begin(), children.end(), [&type, &result, &name, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "function_type", strlen("function_type")) == 0) {
            result = FunctionType::parse(child, code, name);
            type = Type::function;
        } else if (strncmp(ts_node_type(child), "cpp_type", strlen("cpp_type")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result = "std::" + std::string(code.substr(start, end - start));
            type = Type::cpp;
        } else {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result = code.substr(start, end - start);
            type = Type::plain;
        }
    });

    return result;
}
