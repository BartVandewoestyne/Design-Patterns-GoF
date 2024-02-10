set(creational_patterns_SRCS
    BombedMazeFactory.cpp
    BombedMazeGame.cpp
    BombedWall.cpp
    Door.cpp
    DoorNeedingSpell.cpp
    EnchantedMazeFactory.cpp
    EnchantedRoom.cpp
    Maze.cpp
    MazeFactory.cpp
    MazeGame.cpp
    Room.cpp
    RoomWithABomb.cpp
    Wall.cpp)

add_library(creational_patterns SHARED ${creational_patterns_SRCS})
target_include_directories(creational_patterns PRIVATE Builder Abstract_Factory)

add_subdirectory(Abstract_Factory)
add_subdirectory(Builder)
add_subdirectory(Factory_Method)
add_subdirectory(Prototype)
add_subdirectory(Singleton)
