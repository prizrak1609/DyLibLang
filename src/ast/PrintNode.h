#ifndef PRINTNODE_H
#define PRINTNODE_H

#include "ASTNode.h"

struct PrintNode : public ASTNode {
    std::string toString() override;
    static std::string parse(TSNode &node, std::string_view code);
};

#endif //PRINTNODE_H
