cmake_minimum_required(VERSION 3.14...3.22.1)

project(design_patterns CXX)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_subdirectory(Foundation_Classes)
add_subdirectory(Behavioral_Patterns)
add_subdirectory(Creational_Patterns)
add_subdirectory(Structural_Patterns)
