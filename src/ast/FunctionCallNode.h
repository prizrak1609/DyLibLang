#ifndef FUNCTIONCALLNODE_H
#define FUNCTIONCALLNODE_H

#include "ASTNode.h"
#include "tree_sitter/api.h"

struct FunctionCallNode : public ASTNode {
    std::string toString() override;
    static std::string parse(TSNode &node, std::string_view code);
};

#endif //FUNCTIONCALLNODE_H
