#ifndef COUNTING_MAZE_BUILDER_H
#define COUNTING_MAZE_BUILDER_H

#include "MazeBuilder.h"
#include "MazeParts.h"

class CountingMazeBuilder : public MazeBuilder {
public:
    CountingMazeBuilder();

    virtual void BuildMaze();
    virtual void BuildRoom(int);
    virtual void BuildDoor(int, int);
    virtual void AddWall(int, Direction);

    void GetCounts(int&, int&) const;
private:
    int _doors;
    int _rooms;
};

#endif /* COUNTING_MAZE_BUILDER_H */
