#ifndef TYPENODE_H
#define TYPENODE_H

#include "ASTNode.h"
#include "tree_sitter/api.h"
#include <llvm/IR/Type.h>

struct TypeNode : public ASTNode {
    llvm::Type* type;

    std::string toString() override;
    static ASTNode* parse(TSNode& node, std::string_view code);
};

#endif //TYPENODE_H
