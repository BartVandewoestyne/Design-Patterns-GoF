#ifndef BOMBED_MAZEFACTORY_H
#define BOMBED_MAZEFACTORY_H

#include "MazeFactory.h"
#include "Wall.h"
#include "Room.h"

class BombedMazeFactory : public MazeFactory {
public:
    Wall* MakeWall() const;
    Room* MakeRoom(int n) const;
};

#endif /* BOMBED_MAZEFACTORY_H */
