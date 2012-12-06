#include <iostream>
#include "BombedWall.h"
#include "Door.h"
#include "Maze.h"
#include "MazeGame.h"
#include "MazePrototypeFactory.h"
#include "RoomWithABomb.h"
#include "Wall.h"

int main()
{
    MazeGame game;

    MazePrototypeFactory simpleMazeFactory(
        new Maze, new Wall, new Room, new Door
    );
    Maze* maze = game.CreateMaze(simpleMazeFactory);
    std::cout << maze << std::endl;

    MazePrototypeFactory bombedMazeFactory(
        new Maze, new BombedWall,
        new RoomWithABomb, new Door
    );
}
