#ifndef ENCHANTED_ROOM_H
#define ENCHANTED_ROOM_H

#include "Room.h"
class Spell;

class EnchantedRoom : public Room {
public:
    EnchantedRoom(int n, Spell* spell);
private:
    Spell* _spell;
};

#endif /* ENCHANTED_ROOM_H */
