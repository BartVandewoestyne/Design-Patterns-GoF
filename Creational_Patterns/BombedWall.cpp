#include "BombedWall.h"

BombedWall::BombedWall () : Wall()
{
}

BombedWall::BombedWall(const BombedWall& other) : Wall(other)
{
    _bomb = other._bomb;
}

Wall* BombedWall::Clone () const
{
    return new BombedWall(*this);
}
