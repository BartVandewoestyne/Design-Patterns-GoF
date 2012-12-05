#ifndef MAZE_BUILDER_H
#define MAZE_BUILDER_H

class Maze;

class MazeBuilder {
public:
    virtual void BuildMaze() { }
    virtual void BuildRoom(int) { }
    virtual void BuildDoor(int, int) { }

    virtual Maze* GetMaze() { return 0; }
protected:
    MazeBuilder();
};

#endif /* MAZE_BUILDER_H */
