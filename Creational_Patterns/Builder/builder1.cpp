#include <iostream>
#include "MazeGame.h"
#include "StandardMazeBuilder.h"

using namespace std;

class Maze;

int main()
{
  Maze* maze;
  MazeGame game;
  StandardMazeBuilder builder;

  game.CreateMaze(builder);
  maze = builder.GetMaze();

  cout << maze << endl;
}
