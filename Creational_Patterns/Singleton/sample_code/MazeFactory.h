#ifndef MAZE_FACTORY_H
#define MAZE_FACTORY_H

class MazeFactory {
public:
    static MazeFactory* Instance();

    // existing interface goes here
protected:
    MazeFactory();
private:
    static MazeFactory* _instance;
};

#endif /* MAZE_FACTORY_H */
