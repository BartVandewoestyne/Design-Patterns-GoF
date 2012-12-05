#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;


typedef float Coord;

Coord min(Coord x, Coord y);
Coord max(Coord x, Coord y);
Coord abs(Coord x);
int round(Coord x);


class Point {
public:
    static const Point Zero;  

    Point(Coord x = 0.0, Coord y = 0.0);

    Coord X() const;  void X(Coord x);
    Coord Y() const;  void Y(Coord y);

    friend Point operator+(const Point&, const Point&);
    friend Point operator-(const Point&, const Point&);
    friend Point operator*(const Point&, const Point&);
    friend Point operator/(const Point&, const Point&);

    Point& operator+=(const Point&);
    Point& operator-=(const Point&);
    Point& operator*=(const Point&);
    Point& operator/=(const Point&);

    Point operator-();

    friend bool operator==(const Point&, const Point&);
    friend bool operator!=(const Point&, const Point&);

    friend ostream& operator<<(ostream&, const Point&);
    friend istream& operator>>(istream&, Point&);

private:
    Coord _x;
    Coord _y;
};

#endif /* POINT_H */
