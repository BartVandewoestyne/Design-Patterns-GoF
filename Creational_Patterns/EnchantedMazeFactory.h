#ifndef ENCHANTED_MAZE_FACTORY_H
#define ENCHANTED_MAZE_FACTORY_H

#include "DoorNeedingSpell.h"
#include "EnchantedRoom.h"
#include "MazeFactory.h"
#include "Spell.h"

class Door;
class Room;
class MazeFactory;

class EnchantedMazeFactory : public MazeFactory {
public:
    EnchantedMazeFactory();

    virtual Room* MakeRoom(int n)  const
        { return new EnchantedRoom(n, CastSpell()); }

    virtual Door* MakeDoor(Room* r1, Room* r2)  const
        { return new DoorNeedingSpell(r1, r2); }

protected:
    Spell* CastSpell() const;
};

#endif /* ENCHANTED_MAZE_FACTORY_H */
