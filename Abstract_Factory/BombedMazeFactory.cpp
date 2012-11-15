#include "BombedMazeFactory.h"
#include "BombedWall.h"
#include "Room.h"
#include "RoomWithABomb.h"
#include "Wall.h"

Wall* BombedMazeFactory::MakeWall () const {
    return new BombedWall;
}

Room* BombedMazeFactory::MakeRoom(int n) const {
    return new RoomWithABomb(n);
}

