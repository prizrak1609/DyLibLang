#ifndef ASTNODE_H
#define ASTNODE_H

#include <string>
#include <vector>
#include "tree_sitter/api.h"

struct ASTNode {
    virtual std::string toString() = 0;

    static std::vector<TSNode> getChildren(TSNode &node) {
        std::vector<TSNode> result;

        uint32_t child_count = ts_node_child_count(node);
        for (uint32_t i = 0; i < child_count; i++) {
            TSNode child = ts_node_child(node, i);
            result.push_back(child);
        }

        return result;
    }

    virtual ~ASTNode() = default;
};

#endif //ASTNODE_H
