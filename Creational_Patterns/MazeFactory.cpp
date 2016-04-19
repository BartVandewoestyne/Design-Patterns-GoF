#include "MazeFactory.h"

#include "BombedMazeFactory.h"
#include "EnchantedMazeFactory.h"
#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"

#include <iostream>
#include <cstdlib>
#include <cstring>

MazeFactory* MazeFactory::_instance = 0;

MazeFactory::MazeFactory()
{
    std::cout << "MazeFactory::MazeFactory()" << std::endl;
}

MazeFactory* MazeFactory::Instance () {

    if (_instance == 0) {

        const char* mazeStyle = getenv("MAZESTYLE");

        if (strcmp(mazeStyle, "bombed") == 0) {
            _instance = new BombedMazeFactory;

        } else if (strcmp(mazeStyle, "enchanted") == 0) {
            _instance = new EnchantedMazeFactory;

        // ... other possible subclasses

        } else {        // default
            _instance = new MazeFactory;
        }
    }
    return _instance;
}


Maze* MazeFactory::MakeMaze() const
{
    return new Maze;
}

Wall* MazeFactory::MakeWall() const
{
    return new Wall;
}

Room* MazeFactory::MakeRoom(int n) const
{
    return new Room(n);
}

Door* MazeFactory::MakeDoor(Room* r1, Room* r2) const
{
    return new Door(r1, r2);
}
