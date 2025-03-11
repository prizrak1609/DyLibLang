#include "UnloadNode.h"
#include <sstream>
#include <functional>
#include <cstring>

std::string UnloadNode::toString() {
    std::stringstream ss;
    ss << "UnloadNode(lib name:)";

    return ss.str();
}

std::string UnloadNode::parse(TSNode &node, std::string_view code) {
    std::string libName;

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [&libName, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "variable_identifier", strlen("variable_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            libName = code.substr(start, end - start);
        }
    });

    return "dlclose(" + libName + ");";
}
