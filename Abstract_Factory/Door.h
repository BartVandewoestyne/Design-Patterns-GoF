#ifndef DOOR_H
#define DOOR_H 

#include "Door.h"
#include "Room.h"

class Door {
private:
  Room* r1;
  Room* r2;
public:
  Door(Room* r1, Room* r2);
};

#endif /* DOOR_H */
