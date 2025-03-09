#include "VariableNode.h"

#include <sstream>
#include <functional>
#include <cstring>
#include <iostream>

std::string VariableNode::toString() {
    std::stringstream ss;
    ss << "VariableNode( name: " << name << ", type: " << type << " value: " << value << ")";

    return ss.str();
}

ASTNode * VariableNode::parse(TSNode &node, std::string_view code) {
    auto result = new VariableNode();

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [result, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "variable_identifier", strlen("variable_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result->name = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "type", strlen("type")) == 0) {
            result->type = static_cast<TypeNode*>(TypeNode::parse(child, code));
        }
        if (strncmp(ts_node_type(child), "number", strlen("number")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result->value = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "identifier", strlen("identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result->value = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "function_reference", strlen("function_reference")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result->value = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "function_call", strlen("function_call")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result->value = code.substr(start, end - start);
        }
    });

    return result;
}

VariableNode::~VariableNode() {
    delete type;
    // delete value;
}
