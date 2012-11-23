#ifndef ROOM_H
#define ROOM_H

#include "Door.h"
#include "Wall.h"

enum Direction {North, South, East, West};

class Room {
public:
    Room(int n);
    void SetSide(Direction direction, Wall* wall);
    void SetSide(Direction direction, Door* door);
};

#endif /* ROOM_H */
