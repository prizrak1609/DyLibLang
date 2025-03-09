#ifndef FUNCTIONCALLNODE_H
#define FUNCTIONCALLNODE_H

#include "ASTNode.h"
#include "tree_sitter/api.h"

struct FunctionCallNode : public ASTNode {
    std::string functionName;
    std::vector<std::string> parameterNames;

    std::string toString() override;
    static ASTNode* parse(TSNode &node, std::string_view code);
};

#endif //FUNCTIONCALLNODE_H
