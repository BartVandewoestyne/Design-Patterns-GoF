#include <iostream>

#include "BombedMazeGame.h"
#include "Maze.h"
#include "MazeGame.h"

int main()
{
    MazeGame myGame;
    Maze* m1 = myGame.CreateMaze();

    std::cout << std::endl;

    BombedMazeGame myBombedGame;
    Maze* m2 = myBombedGame.CreateMaze();
}
