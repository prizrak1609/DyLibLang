#ifndef VARIABLENODE_H
#define VARIABLENODE_H

#include "ASTNode.h"
#include "tree_sitter/api.h"

struct VariableNode : public ASTNode {
    std::string toString() override;
    static std::string parse(TSNode& node, std::string_view code);
};

#endif //VARIABLENODE_H
