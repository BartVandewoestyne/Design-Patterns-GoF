set(creational_patterns_SRCS
    Room.cpp)

add_library(creational_patterns SHARED ${creational_patterns_SRCS})

add_subdirectory(Abstract_Factory)
add_subdirectory(Builder)
