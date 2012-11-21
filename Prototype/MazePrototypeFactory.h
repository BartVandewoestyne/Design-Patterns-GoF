#ifndef MAZE_PROTOTYPE_FACTORY_H
#define MAZE_PROTOTYPE_FACTORY_H

#include "MazeFactory.h"

class Maze;
class Wall;
class Room;
class Door;

class MazePrototypeFactory : public MazeFactory {
public:
    MazePrototypeFactory(Maze*, Wall*, Room*, Door*);

    virtual Maze* MakeMaze() const;
    virtual Room* MakeRoom(int) const;
    virtual Wall* MakeWall() const;
    virtual Door* MakeDoor(Room*, Room*) const;

private:
    Maze* _prototypeMaze;
    Room* _prototypeRoom;
    Wall* _prototypeWall;
    Door* _prototypeDoor;
};

#endif /* MAZE_PROTOTYPE_FACTORY_H */
