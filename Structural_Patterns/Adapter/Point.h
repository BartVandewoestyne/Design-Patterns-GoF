#ifndef POINT_H
#define POINT_H

#include "Coord.h"

class Point {
public:
    Point(Coord c1, Coord c2);
private:
    Coord c1, c2;
};

#endif /* POINT_H */
