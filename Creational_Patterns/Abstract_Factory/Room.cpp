#include <iostream>
#include "Room.h"

class Wall;
class Door;

Room::Room(int n)
{
    std::cout << "Room(int n)" << std::endl;
}

void Room::SetSide(Orientation orientation, Wall* wall)
{
    std::cout << "Room::SetSide(Orientation orientation, Wall* wall)" << std::endl;
}

void Room::SetSide(Orientation orientation, Door* door)
{
    std::cout << "Room::SetSide(Orientation orientation, Door* door)" << std::endl;
}
