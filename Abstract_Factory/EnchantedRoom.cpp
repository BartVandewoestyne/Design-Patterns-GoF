#include <iostream>
#include "EnchantedRoom.h"
#include "Spell.h"

EnchantedRoom::EnchantedRoom(int n, Spell* spell)
  : Room(n)
{
  std::cout << "EnchantedRoom::EnchantedRoom(int n, Spell* spell)" << std::endl;
}
