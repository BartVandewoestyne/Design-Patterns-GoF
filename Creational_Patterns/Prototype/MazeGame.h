#ifndef MAZE_GAME_H
#define MAZE_GAME_H

#include "Maze.h"
#include "MazeFactory.h"

class MazeGame {
public:
  Maze* CreateMaze(MazeFactory simpleMazeFactory);
};

#endif /* MAZE_GAME_H */
