#include "ValueNode.h"

#include <sstream>
#include <functional>
#include <cstring>

#include "FunctionCallNode.h"
#include "FunctionReference.h"

std::string ValueNode::toString() {
    return "";
}

std::string ValueNode::parse(TSNode &node, std::string_view code, Type& type) {
    std::string value;

    auto children = getChildren(node);
    type = Type::plain;
    std::for_each(children.begin(), children.end(), [&, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "function_call", strlen("function_call")) == 0) {
            value = FunctionCallNode::parse(child, code);
        }
        if (strncmp(ts_node_type(child), "function_reference", strlen("function_reference")) == 0) {
            value = FunctionReference::parse(child, code);
            type = Type::functionRef;
        }
        if (strncmp(ts_node_type(child), "number", strlen("number")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            value = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "identifier", strlen("identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            value = code.substr(start, end - start);
        }
    });

    return value;
}
