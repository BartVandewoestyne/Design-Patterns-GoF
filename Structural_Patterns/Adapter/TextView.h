#ifndef TEXTVIEW_H
#define TEXTVIEW_H

#include "Point.h"

class TextView {
public:
    TextView();
    void GetOrigin(Coord& x, Coord& y) const;
    void GetExtent(Coord& width, Coord& height) const;
    virtual bool IsEmpty() const;
};

#endif /* TEXTVIEW_H */
