#ifndef DOOR_H
#define DOOR_H

#include "MapSite.h"
#include "Room.h"

class Door : public MapSite {
public:
    Door();
    Door(Room* r1, Room* r2);
    Door(const Door&);

    virtual void Initialize(Room*, Room*);
    virtual Door* Clone() const;

    virtual void Enter();
    Room* OtherSideFrom(Room*);

private:
    Room* _room1;
    Room* _room2;
};

#endif /* DOOR_H */
