#include "FunctionType.h"

#include <functional>
#include <cstring>

#include "TypeNode.h"

std::string FunctionType::toString() {
    return "";
}

std::string FunctionType::parse(TSNode &node, std::string_view code, const std::string& funcName) {
    std::string returnType;
    std::vector<std::string> parameterNames;

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [&parameterNames, &returnType, code](TSNode &child) {
        TypeNode::Type type;
        if (strncmp(ts_node_type(child), "type", strlen("type")) == 0) {
            returnType = TypeNode::parse(child, code, type);
        }
        if (strncmp(ts_node_type(child), "argument_type", strlen("argument_type")) == 0) {
            parameterNames.emplace_back(TypeNode::parse(child, code, type));
        }
    });

    std::string parametersStr;
    if (!parameterNames.empty()) {
        parametersStr = parameterNames[0];
        for(unsigned int i = 1; i < parameterNames.size(); i++) {
            parametersStr += ", " + parameterNames[i];
        }
    }

    return returnType + "(" + funcName + "*)(" + parametersStr + ")";
}
