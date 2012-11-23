#ifndef MAZE_GAME_H
#define MAZE_GAME_H

class Maze;
class MazeBuilder;

class MazeGame {
public:
  Maze* CreateMaze (MazeBuilder& builder);
  Maze* CreateComplexMaze (MazeBuilder& builder);
};

#endif /* MAZE_GAME_H */
