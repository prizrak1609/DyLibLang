#include "UnloadNode.h"
#include <sstream>
#include <functional>
#include <cstring>

std::string UnloadNode::toString() {
    std::stringstream ss;
    ss << "UnloadNode(lib name: " << libName << ")";

    return ss.str();
}

ASTNode * UnloadNode::parse(TSNode &node, std::string_view code) {
    auto result = new UnloadNode();

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [result, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "variable_identifier", strlen("variable_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            result->libName = code.substr(start, end - start);
        }
    });

    return result;
}
