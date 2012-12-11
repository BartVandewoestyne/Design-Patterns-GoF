#include "Compiler.h"
#include "Scanner.h"

#include "Parser.h"
#include "ProgramNodeBuilder.h"
#include "RISCCodeGenerator.h"

void Compiler::Compile (
    istream& input, BytecodeStream& output
) {
    Scanner scanner(input);
    ProgramNodeBuilder builder;
    Parser parser;

    parser.Parse(scanner, builder);

    RISCCodeGenerator generator(output);
    ProgramNode* parseTree = builder.GetRootNode();
    parseTree->Traverse(generator);
}
