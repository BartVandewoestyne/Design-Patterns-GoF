#ifndef ROOM_H
#define ROOM_H

class Door;
class Wall;

enum Orientation {North, South, East, West};

class Room {
public:
    Room(int n);
    void SetSide(Orientation orientation, Wall* wall);
    void SetSide(Orientation orientation, Door* door);
};

#endif /* ROOM_H */
