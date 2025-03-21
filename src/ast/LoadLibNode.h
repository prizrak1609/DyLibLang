#ifndef LOADLIBNODE_H
#define LOADLIBNODE_H

#include "ASTNode.h"
#include <string>

struct LoadLibNode : public ASTNode {
    std::string toString() override;
    static std::string parse(TSNode &node, std::string_view code);
};

#endif //LOADLIBNODE_H
