#ifndef VALUENODE_H
#define VALUENODE_H

#include "ASTNode.h"
#include "tree_sitter/api.h"

struct ValueNode : public ASTNode {
    enum class Type {
        functionRef,
        plain
    };
    std::string toString() override;
    static std::string parse(TSNode& node, std::string_view code, Type& type);
};

#endif //VALUENODE_H
