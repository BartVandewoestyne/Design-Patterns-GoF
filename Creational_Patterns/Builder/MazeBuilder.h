#ifndef MAZE_BUILDER_H
#define MAZE_BUILDER_H

class Maze;

class MazeBuilder {
public:
    virtual void BuildMaze() { }
    virtual void BuildRoom(int room) { }
    virtual void BuildDoor(int roomFrom, int roomTo) { }

    virtual Maze* GetMaze() { return 0; }
protected:
    MazeBuilder();
};

#endif /* MAZE_BUILDER_H */
