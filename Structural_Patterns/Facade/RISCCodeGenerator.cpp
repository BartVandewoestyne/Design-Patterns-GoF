#include "RISCCodeGenerator.h"
#include "CodeGenerator.h"

RISCCodeGenerator::RISCCodeGenerator(BytecodeStream& stream)
    : CodeGenerator(stream)
{}

void RISCCodeGenerator::Visit(StatementNode*)
{
    // TODO
}

void RISCCodeGenerator::Visit(ExpressionNode*)
{
    // TODO
}
