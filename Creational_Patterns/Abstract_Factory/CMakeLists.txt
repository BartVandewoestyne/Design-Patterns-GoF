set(abstract_factory_SRCS
    BombedMazeFactory.cpp
    Door.cpp
    DoorNeedingSpell.cpp
    EnchantedMazeFactory.cpp
    EnchantedRoom.cpp
    Maze.cpp
    MazeFactory.cpp
    MazeGame.cpp
    Room.cpp
    RoomWithABomb.cpp)

add_library(abstract_factory SHARED ${abstract_factory_SRCS})

add_executable(abstract_factory1 main.cpp)
target_link_libraries(abstract_factory1 abstract_factory)
