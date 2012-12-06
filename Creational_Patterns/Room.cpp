#include <iostream>
#include "Room.h"

class Wall;
class Door;

Room::Room(int n)
  : _roomNumber(n)
{}

void Room::SetSide(Direction direction, MapSite* ms)
{
    _sides[direction] = ms;
}

int Room::GetRoomNumber()
{
    return _roomNumber;
}

Room* Room::Clone() const {
    return new Room(*this);
}

void Room::Enter()
{}
