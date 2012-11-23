#include "Maze.h"

Maze* Maze::Clone() const {
    return new Maze(*this);
}
