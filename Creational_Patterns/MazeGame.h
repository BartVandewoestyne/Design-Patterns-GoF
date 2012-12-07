#ifndef MAZE_GAME_H
#define MAZE_GAME_H

#include "Maze.h"
#include "Room.h"
#include "Wall.h"
#include "Door.h"

class MazeFactory;
class MazeBuilder;

class MazeGame {
public:
    Maze* CreateMaze();

    Maze* CreateMaze(MazeFactory& factory);
    Maze* CreateMaze(MazeBuilder& builder);
    Maze* CreateComplexMaze(MazeBuilder& builder);

    // factory methods:

    virtual Maze* MakeMaze() const
        { return new Maze; }
    virtual Room* MakeRoom(int n) const
        { return new Room(n); }
    virtual Wall* MakeWall() const
        { return new Wall; }
    virtual Door* MakeDoor(Room* r1, Room* r2) const
        { return new Door(r1, r2); }
};

#endif /* MAZE_GAME_H */
