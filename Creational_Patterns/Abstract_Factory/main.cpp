#include "MazeGame.h"
#include "BombedMazeFactory.h"
#include "EnchantedMazeFactory.h"

int main()
{
  MazeGame game;

  BombedMazeFactory factoryBombed;
  EnchantedMazeFactory factoryEnchanted;

  game.CreateMaze(factoryBombed);
  game.CreateMaze(factoryEnchanted);
}
