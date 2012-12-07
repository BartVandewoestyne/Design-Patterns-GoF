#include "EnchantedRoom.h"
#include "Spell.h"

EnchantedRoom::EnchantedRoom(int n, Spell* spell)
  : Room(n), _spell(spell)
{}
