#include <iostream>
#include "EnchantedMazeFactory.h"
#include "Spell.h"

EnchantedMazeFactory::EnchantedMazeFactory()
{
  std::cout << "EnchantedMazeFactory::EnchantedMazeFactory()" << std::endl;
}


Spell* EnchantedMazeFactory::CastSpell() const
{
  std::cout << "EnchantedMazeFactory::CastSpell()" << std::endl;
}
