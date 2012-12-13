cmake_minimum_required(VERSION 2.6)

project(design_patterns CXX)

set(CMAKE_CXX_FLAGS "-g -Wall -Wextra")
#set(CMAKE_CXX_FLAGS "-g")

add_subdirectory(Foundation_Classes)
add_subdirectory(Behavioral_Patterns)
add_subdirectory(Creational_Patterns)
add_subdirectory(Structural_Patterns)
