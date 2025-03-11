#include "FunctionCallNode.h"
#include <sstream>
#include <functional>
#include <cstring>
#include <iostream>

std::string FunctionCallNode::toString() {
    return "";
}

std::string FunctionCallNode::parse(TSNode &node, std::string_view code) {
    std::string functionName;
    std::vector<std::string> parameterNames;

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [&functionName, &parameterNames, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "function_identifier", strlen("function_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            functionName = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "argument_declaration", strlen("argument_declaration")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            parameterNames.emplace_back(code.substr(start, end - start));
        }
    });

    std::string parametersStr;
    if (!parameterNames.empty()) {
        parametersStr = parameterNames[0];
        for(unsigned int i = 1; i < parameterNames.size(); i++) {
            parametersStr += ", " + parameterNames[i];
        }
    }

    return functionName + "(" + parametersStr + ")";
}
