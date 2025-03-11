#include "FunctionReference.h"

#include <functional>
#include <cstring>

std::string FunctionReference::toString() {
    return"";
}

std::string FunctionReference::parse(TSNode &node, std::string_view code) {
    std::string variable;
    std::string functionName;

    auto children = getChildren(node);
    std::for_each(children.begin(), children.end(), [&variable, &functionName, code](TSNode &child) {
        if (strncmp(ts_node_type(child), "identifier", strlen("identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            variable = code.substr(start, end - start);
        }
        if (strncmp(ts_node_type(child), "function_identifier", strlen("function_identifier")) == 0) {
            auto start = ts_node_start_byte(child);
            auto end = ts_node_end_byte(child);
            functionName = code.substr(start, end - start);
        }
    });

    return "dlsym(" + variable + ", \"" + functionName + "\")";
}
