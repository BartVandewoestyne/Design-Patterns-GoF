#ifndef MAZE_FACTORY_H
#define MAZE_FACTORY_H

class Maze;
class Room;
class Wall;
class Door;

class MazeFactory {
public:
    MazeFactory();

    virtual Maze* MakeMaze() const;
    virtual Wall* MakeWall() const;
    virtual Room* MakeRoom(int n) const;
    virtual Door* MakeDoor(Room* r1, Room* r2) const;

protected:
    static MazeFactory* _instance;
};

#endif /* MAZE_FACTORY_H */
