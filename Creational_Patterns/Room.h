#ifndef ROOM_H
#define ROOM_H

#include "MapSite.h"
#include "MazeParts.h"

class Room : MapSite {
public:
    Room(int n = 0);

    virtual Room* Clone() const;

    void SetSide(Direction direction, MapSite* ms);
    int GetRoomNumber();

    virtual void Enter();

private:
    MapSite* _sides[4];
    int _roomNumber;
};

#endif /* ROOM_H */
