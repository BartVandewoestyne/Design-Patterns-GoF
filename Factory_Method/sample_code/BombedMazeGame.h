#include "BombedWall.h"
#include "MazeGame.h"
#include "RoomWithABomb.h"

class Room;
class Wall;

class BombedMazeGame : public MazeGame {
public:
    BombedMazeGame();

    virtual Wall* MakeWall() const
        { return new BombedWall; }

    virtual Room* MakeRoom(int n) const
        { return new RoomWithABomb(n); }
};
