#include <iostream>
#include "Room.h"

class Wall;
class Door;

Room::Room(int n)
{
    std::cout << "Room(int n)" << std::endl;
}

void Room::SetSide(Direction direction, Wall* wall)
{
    std::cout << "Room::SetSide(Direction direction, Wall* wall)" << std::endl;
}

void Room::SetSide(Direction direction, Door* door)
{
    std::cout << "Room::SetSide(Direction direction, Door* door)" << std::endl;
}
