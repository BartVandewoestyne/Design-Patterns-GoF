include_directories(../../Foundation_Classes)
include_directories(../../Behavioral_Patterns/Iterator)

set(facade_SRCS
    Compiler.cpp
    ExpressionNode.cpp)

add_library(facade SHARED ${facade_SRCS})
