#ifndef STANDARD_MAZE_BUILDER_H
#define STANDARD_MAZE_BUILDER_H

#include "MazeBuilder.h"
#include "Room.h"
#include "MazeParts.h"

class Maze;

class StandardMazeBuilder : public MazeBuilder {
public:
    StandardMazeBuilder();

    virtual void BuildMaze();
    virtual void BuildRoom(int);
    virtual void BuildDoor(int, int);

    virtual Maze* GetMaze();
private:
    Direction CommonWall(Room*, Room*);
    Maze* _currentMaze;
};

#endif /* STANDARD_MAZE_BUILDER_H */
