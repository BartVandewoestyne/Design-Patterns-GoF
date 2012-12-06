#include "RoomWithABomb.h"

RoomWithABomb::RoomWithABomb(int n, bool bombed)
  : Room(n), _bomb(bombed)
{}

RoomWithABomb::RoomWithABomb(const RoomWithABomb& other)
  : Room(other)
{
    _bomb = other._bomb;
}

bool RoomWithABomb::HasBomb()
{
    return _bomb;
}
