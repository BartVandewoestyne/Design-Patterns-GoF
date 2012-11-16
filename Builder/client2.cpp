#include <iostream>

#include "MazeGame.h"
#include "CountingMazeBuilder.h"

using namespace std;

int main()
{
  int rooms, doors;
  MazeGame game;
  CountingMazeBuilder builder;
  
  game.CreateMaze(builder);
  builder.GetCounts(rooms, doors);
  
  cout << "The maze has "
       << rooms << " rooms and "
       << doors << " doors" << endl;
}
