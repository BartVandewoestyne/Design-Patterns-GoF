#include "TextView.h"

TextView::TextView()
{
    _x = 1.0;
    _y = 2.0;
    _width = 3.0;
    _height = 4.0;
}

void TextView::GetOrigin(Coord& x, Coord& y) const
{
    x = _x;
    y = _y;
}

void TextView::GetExtent(Coord& width, Coord& height) const
{
    width = _width;
    height = _height;
}

bool TextView::IsEmpty() const
{
  return _width == 0 || _height == 0;
}
