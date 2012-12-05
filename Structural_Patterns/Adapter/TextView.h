#ifndef TEXTVIEW_H
#define TEXTVIEW_H

#include "Coord.h"

class TextView {
public:
    TextView();
    void GetOrigin(Coord& x, Coord& y) const;
    void GetExtent(Coord& width, Coord& height) const;
    virtual bool IsEmpty() const;
private:
    Coord _x;
    Coord _y;
    Coord _width;
    Coord _height;
};

#endif /* TEXTVIEW_H */
