#ifndef DOOR_NEEDING_SPELL_H
#define DOOR_NEEDING_SPELL_H 

#include "Door.h"

class Room;

class DoorNeedingSpell : public Door {
public:
  DoorNeedingSpell(Room* r1, Room* r2);
};

#endif /* DOOR_NEEDING_SPELL_H */
