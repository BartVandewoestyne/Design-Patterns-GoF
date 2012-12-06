set(creational_patterns_SRCS
    Door.cpp
    Maze.cpp
    Room.cpp
    Wall.cpp)

add_library(creational_patterns SHARED ${creational_patterns_SRCS})

add_subdirectory(Abstract_Factory)
add_subdirectory(Builder)
add_subdirectory(Prototype)
