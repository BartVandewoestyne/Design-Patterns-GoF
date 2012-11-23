#include "Maze.h"
#include "MazeFactory.h"

class MazeGame
{
public:
  Maze* CreateMaze(MazeFactory& factory);
};
