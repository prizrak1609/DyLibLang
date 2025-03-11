#include "PrintNode.h"

#include <iostream>
#include <cstring>
#include <functional>

#include "ValueNode.h"

std::string PrintNode::toString() {
    return "";
}

std::string PrintNode::parse(TSNode &node, std::string_view code) {
    std::string value;

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [&value, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "value_declaration", strlen("value_declaration")) == 0) {
            ValueNode::Type type;
            value = ValueNode::parse(child, code, type);
        }
    });

    return "std::cout << " + value + " << std::endl;";
}
