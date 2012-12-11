#ifndef EXPRESSION_NODE_H
#define EXPRESSION_NODE_H

#include "ProgramNode.h"
#include "List.h"

class ExpressionNode : public ProgramNode {
public:
    void Traverse(CodeGenerator& cg);
    void Add(ProgramNode*);
    void Remove(ProgramNode*);
protected:
    List<ProgramNode*>* _children;
};

#endif /* EXPRESSION_NODE_H */
