#include "ProgramNodeBuilder.h"

    ProgramNodeBuilder::ProgramNodeBuilder()
    {}

    ProgramNode* ProgramNodeBuilder::NewVariable(
        const char* variableName
    ) const
    {
        // TODO
        return 0;
    }

    ProgramNode* ProgramNodeBuilder::NewAssignment(
        ProgramNode* variable, ProgramNode* expression
    ) const
    {
        // TODO
        return 0;
    }

    ProgramNode* ProgramNodeBuilder::NewReturnStatement(
        ProgramNode* value
    ) const
    {
        // TODO
        return 0;
    }

    ProgramNode* ProgramNodeBuilder::NewCondition(
        ProgramNode* condition,
        ProgramNode* truePart, ProgramNode* falsePart
    ) const
    {
        // TODO
        return 0;
    }

    ProgramNode* ProgramNodeBuilder::GetRootNode()
    {
        // TODO
        return 0;
    }
