#include "Door.h"
#include "Maze.h"
#include "MazePrototypeFactory.h"
#include "Room.h"
#include "Wall.h"

MazePrototypeFactory::MazePrototypeFactory (
    Maze* m, Wall* w, Room* r, Door* d
) {
   _prototypeMaze = m;
   _prototypeWall = w;
   _prototypeRoom = r;
   _prototypeDoor = d;
}

Maze* MazePrototypeFactory::MakeMaze() const {
    return _prototypeMaze->Clone();
}

Room* MazePrototypeFactory::MakeRoom(int) const {
    return _prototypeRoom->Clone();
}

Wall* MazePrototypeFactory::MakeWall () const {
    return _prototypeWall->Clone();
}


Door* MazePrototypeFactory::MakeDoor (Room* r1, Room *r2) const {
    Door* door = _prototypeDoor->Clone();
    door->Initialize(r1, r2);
    return door;
}
