set(builder_SRCS
    CountingMazeBuilder.cpp
    Door.cpp
    MazeBuilder.cpp
    Maze.cpp
    MazeGame.cpp
    Room.cpp
    RoomWithABomb.cpp
    StandardMazeBuilder.cpp)

add_library(builder SHARED ${builder_SRCS})

add_executable(builder1 builder1.cpp)
add_executable(builder2 builder2.cpp)

target_link_libraries(builder1 builder)
target_link_libraries(builder2 builder)
