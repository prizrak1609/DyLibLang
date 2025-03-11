#include "VariableNode.h"

#include <sstream>
#include <functional>
#include <cstring>
#include <iostream>
#include "TypeNode.h"
#include "ValueNode.h"

std::string VariableNode::toString() {
    std::stringstream ss;
    ss << "VariableNode()";

    return ss.str();
}

std::string VariableNode::parse(TSNode &node, std::string_view code) {
    std::string name;
    std::string typeStr;
    std::string value;
    std::string castType;
    TypeNode::Type type;
    ValueNode::Type valueType;

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [&, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "variable_identifier", strlen("variable_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            name = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "type", strlen("type")) == 0) {
            typeStr = TypeNode::parse(child, code, type, name);
            std::string _castType = TypeNode::parse(child, code, type);
            switch (type) {
                case TypeNode::Type::plain:
                case TypeNode::Type::cpp: castType = "*(" + _castType + "*)"; break;
                case TypeNode::Type::function: castType = "(" + _castType + ")"; break;
            }
        }
        if (strncmp(ts_node_type(child), "value_declaration", strlen("value_declaration")) == 0) {
            value = ValueNode::parse(child, code, valueType);
        }
    });

    std::string valueStr;
    switch (valueType) {
        case ValueNode::Type::plain:
            switch (type) {
                case TypeNode::Type::plain:
                    case TypeNode::Type::cpp:
                return typeStr + " " + name + " = " + value + ";";

                case TypeNode::Type::function:
                    return typeStr + " = " + value + ";";
            }

        case ValueNode::Type::functionRef:
        switch (type) {
            case TypeNode::Type::plain:
                case TypeNode::Type::cpp:
            return typeStr + " " + name + " = " + castType + "(" + value + ");";

            case TypeNode::Type::function:
                return typeStr + " = " + castType + "(" + value + ");";
        }
    }
}
