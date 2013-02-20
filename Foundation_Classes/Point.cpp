#include <iostream>
#include "Point.h"

const Point Point::Zero(0, 0);

Point::Point(Coord x, Coord y)
  : _x(x), _y(y)
{}

Coord Point::X() const
{
    return _x;
}

Coord Point::Y() const
{
    return _y;
}

void Point::X(Coord x)
{
    _x = x;
}

void Point::Y(Coord y)
{
    _y = y;
}

Point operator+(const Point& lhs, const Point& rhs)
{
    Point ret(lhs);
    ret += rhs;
    return ret;
}

Point operator-(const Point& lhs, const Point& rhs)
{
    Point ret(lhs);
    ret -= rhs;
    return ret;
}

Point operator*(const Point& lhs, const Point& rhs)
{
    Point ret(lhs);
    ret *= rhs;
    return ret;
}

Point operator/(const Point& lhs, const Point& rhs)
{
    Point ret(lhs);
    ret /= rhs;
    return ret;
}

Point& Point::operator+=(const Point& rhs)
{
    _x += rhs._x;
    _y += rhs._y;
    return *this;
}

Point& Point::operator-=(const Point& rhs)
{
    _x -= rhs._x;
    _y -= rhs._y;
    return *this;
}

Point& Point::operator*=(const Point& rhs)
{
    _x *= rhs._x;
    _y *= rhs._y;
    return *this;
}

Point& Point::operator/=(const Point& rhs)
{
    _x /= rhs._x;
    _y /= rhs._y;
    return *this;
}

Point Point::operator-()
{
    Point ret(*this);
    ret._x = -ret._x;
    ret._y = -ret._y;
    return ret;
}

bool operator==(const Point& lhs, const Point& rhs)
{
    return lhs._x == rhs._x &&
           lhs._y == rhs._y;
}

bool operator!=(const Point& lhs, const Point& rhs)
{
    return !(lhs == rhs);
}

ostream& operator<<(ostream& out, const Point& p)
{
    out << "(" << p._x << ", " << p._y << ")";
    return out;
}

istream& operator>>(istream& in, Point& p)
{
    in >> p._x >> p._y;
    if (!in) {
        p = Point();  // input failed, reset object to default state
    }
    return in;
}
