set(facade_SRCS
    CodeGenerator.cpp
    Compiler.cpp
    ExpressionNode.cpp
    Parser.cpp
    ProgramNode.cpp
    ProgramNodeBuilder.cpp
    RISCCodeGenerator.cpp
    Scanner.cpp)

add_library(facade SHARED ${facade_SRCS})
target_include_directories(facade PRIVATE ../../Foundation_Classes ../../Behavioral_Patterns/Iterator)
