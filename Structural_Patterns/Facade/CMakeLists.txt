set(facade_SRCS
    Compiler.cpp
    ExpressionNode.cpp
    ProgramNode.cpp)

add_library(facade SHARED ${facade_SRCS})
target_include_directories(facade PRIVATE ../../Foundation_Classes ../../Behavioral_Patterns/Iterator)
