#include "Door.h"

Door::Door ()
{}

Door::Door(Room* r1, Room* r2)
  : _room1(r1), _room2(r2)
{}

Door::Door (const Door& other)
{
    _room1 = other._room1;
    _room2 = other._room2;
}

void Door::Initialize (Room* r1, Room* r2)
{
    _room1 = r1;
    _room2 = r2;
}

Door* Door::Clone () const
{
    return new Door(*this);
}

void Door::Enter()
{
}
