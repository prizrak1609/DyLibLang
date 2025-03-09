#ifndef VALUENODE_H
#define VALUENODE_H

#include "ASTNode.h"
#include "tree_sitter/api.h"

struct ValueNode : public ASTNode {
    std::string toString() override;
    static ASTNode* parse(TSNode& node, std::string_view code);
};

#endif //VALUENODE_H
