#include "Door.h"
#include "Room.h"

Door::Door(Room* r1, Room* r2)
{
  this->r1 = r1;
  this->r2 = r2;
}
