#include "CodeGenerator.h"

void CodeGenerator::Visit(StatementNode*)
{
    // TODO
}

void CodeGenerator::Visit(ExpressionNode*)
{
    // TODO
}

CodeGenerator::CodeGenerator(BytecodeStream& stream)
    : _output(stream)
{}