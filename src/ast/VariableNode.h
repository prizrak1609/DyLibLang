#ifndef VARIABLENODE_H
#define VARIABLENODE_H

#include "ASTNode.h"
#include "tree_sitter/api.h"
#include "TypeNode.h"
#include "ValueNode.h"

struct VariableNode : public ASTNode {
    std::string name;
    TypeNode* type;
    std::string value;

    std::string toString() override;
    static ASTNode* parse(TSNode& node, std::string_view code);

    ~VariableNode() override;
};

#endif //VARIABLENODE_H
