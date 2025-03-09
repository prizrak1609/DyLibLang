#ifndef LOADLIBNODE_H
#define LOADLIBNODE_H

#include "ASTNode.h"
#include <string>

struct LoadLibNode : public ASTNode {
    std::string libName;
    std::string alias;

    std::string toString() override;
    static ASTNode *parse(TSNode &node, std::string_view code);
};

#endif //LOADLIBNODE_H
