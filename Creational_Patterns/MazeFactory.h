#ifndef MAZE_FACTORY_H
#define MAZE_FACTORY_H

#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"

class MazeFactory {
public:

    static MazeFactory* Instance();

    virtual Maze* MakeMaze() const;
    virtual Wall* MakeWall() const;
    virtual Room* MakeRoom(int n) const;
    virtual Door* MakeDoor(Room* r1, Room* r2) const;

//protected:
public:
    MazeFactory();  // constructor is public for Abstract Factory, protected for Singleton

private:
    static MazeFactory* _instance;
};

#endif /* MAZE_FACTORY_H */
