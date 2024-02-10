set(strategy_SRCS
    Composition.cpp
    Compositor.cpp
    SimpleCompositor.cpp
    TeXCompositor.cpp
    ArrayCompositor.cpp)

add_library(strategy1 SHARED ${strategy_SRCS})
target_include_directories(strategy1 PRIVATE ./ ../../Foundation_Classes)
target_link_libraries(strategy1 foundation_classes)

add_executable(strategy main.cpp)
target_link_libraries(strategy strategy1)
