#include "Wall.h"

Wall::Wall()
{}

Wall::Wall(Wall const&)
{}

Wall* Wall::Clone() const
{
    return new Wall(*this);
}

void Wall::Enter()
{}
