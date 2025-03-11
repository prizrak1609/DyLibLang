#include "LoadLibNode.h"
#include <sstream>
#include <functional>
#include <cstring>
#include <iostream>

std::string LoadLibNode::toString() {
    std::stringstream ss;
    ss << "LoadLibNode()";

    return ss.str();
}

std::string LoadLibNode::parse(TSNode &node, std::string_view code) {
    std::string libName;
    std::string alias;

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [&libName, &alias, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "library_identifier", strlen("library_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            libName = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "alias_identifier", strlen("alias_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            alias = code.substr(start, end - start);
        }
    });

    if (alias.empty()) {
        auto dot_position = libName.find('.');
        if (dot_position == std::string::npos) {
            std::cerr << "cannot find library name in " << libName << std::endl;
            abort();
        }
        alias = libName.substr(0, dot_position);
    }

    return "void* " + alias + " = dlopen(\"" + libName + "\", RTLD_LAZY);";
}
