#ifndef UNLOADNODE_H
#define UNLOADNODE_H

#include "ASTNode.h"

struct UnloadNode : public ASTNode {
    std::string libName;

    std::string toString() override;
    static ASTNode *parse(TSNode &node, std::string_view code);
};



#endif //UNLOADNODE_H
