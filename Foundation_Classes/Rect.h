#ifndef RECT_H
#define RECT_H

#include "Coord.h"
#include "Point.h"

class Rect {
public:
    static const Rect Zero; 

    Rect(Coord x, Coord y, Coord w, Coord h);
    Rect(const Point& origin, const Point& extent);

    Coord Width() const;   void Width(Coord);
    Coord Height() const;  void Height(Coord);
    Coord Left() const;    void Left(Coord);
    Coord Bottom() const;  void Bottom(Coord);

    Point& Origin() const; void Origin(const Point&);
    Point& Extent() const; void Extent(const Point&);

    void MoveTo(const Point&);
    void MoveBy(const Point&);

    bool IsEmpty() const;
    bool Contains(const Point&) const;
};

#endif /* RECT_H */
