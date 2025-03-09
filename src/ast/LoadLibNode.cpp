#include "LoadLibNode.h"
#include <sstream>
#include <functional>
#include <cstring>
#include <iostream>

std::string LoadLibNode::toString() {
    std::stringstream ss;
    ss << "LoadLibNode(";
    ss << "lib name: " << libName << ", ";
    ss << "alias: " << alias << ")";

    return ss.str();
}

ASTNode * LoadLibNode::parse(TSNode &node, std::string_view code) {
    auto result = new LoadLibNode();

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [result, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "library_identifier", strlen("library_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result->libName = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "alias_identifier", strlen("alias_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result->alias = code.substr(start, end - start);
        }
    });

    if (result->alias.empty()) {
        auto dot_position = result->libName.find('.');
        if (dot_position == std::string::npos) {
            std::cerr << "cannot find library name in " << result->libName << std::endl;
            abort();
        }
        result->alias = result->libName.substr(0, dot_position);
    }

    return result;
}
