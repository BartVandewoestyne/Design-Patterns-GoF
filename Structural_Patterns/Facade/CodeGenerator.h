#ifndef CODE_GENERATOR_H
#define CODE_GENERATOR_H

class StatementNode;
class ExpressionNode;
class BytecodeStream;

class CodeGenerator {
public:
    virtual void Visit(StatementNode*);
    virtual void Visit(ExpressionNode*);
    // ...
protected:
    CodeGenerator(BytecodeStream&);
protected:
    BytecodeStream& _output;
};

#endif /* CODE_GENERATOR_H */
