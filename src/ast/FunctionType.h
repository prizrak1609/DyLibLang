#ifndef FUNCTIONTYPE_H
#define FUNCTIONTYPE_H

#include "ASTNode.h"

struct FunctionType : public ASTNode {
    std::string toString() override;
    static std::string parse(TSNode& node, std::string_view code, const std::string& funcName = "");
};

#endif //FUNCTIONTYPE_H
