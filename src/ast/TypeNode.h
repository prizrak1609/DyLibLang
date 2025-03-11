#ifndef TYPENODE_H
#define TYPENODE_H

#include "ASTNode.h"
#include "tree_sitter/api.h"

struct TypeNode : public ASTNode {
    enum class Type {
        plain,
        cpp,
        function
    };

    std::string toString() override;
    static std::string parse(TSNode& node, std::string_view code, Type& type, const std::string& name = "");
};

#endif //TYPENODE_H
