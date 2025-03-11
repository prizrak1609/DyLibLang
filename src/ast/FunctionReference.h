#ifndef FUNCTIONREFERENCE_H
#define FUNCTIONREFERENCE_H

#include "ASTNode.h"

struct FunctionReference : public ASTNode {
    std::string toString() override;
    static std::string parse(TSNode& node, std::string_view code);
};

#endif //FUNCTIONREFERENCE_H
