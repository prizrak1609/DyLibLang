#ifndef UNLOADNODE_H
#define UNLOADNODE_H

#include "ASTNode.h"

struct UnloadNode : public ASTNode {
    std::string toString() override;
    static std::string parse(TSNode &node, std::string_view code);
};

#endif //UNLOADNODE_H
