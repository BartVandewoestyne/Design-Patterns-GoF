#ifndef TEXTSHAPE_H
#define TEXTSHAPE_H

#include "Point.h"
#include "Shape.h"
#include "TextView.h"

class Manipulator;

class TextShape : public Shape, private TextView {
public:
    TextShape();

    virtual void BoundingBox(
        Point& bottomLeft, Point& topRight
    ) const;
    virtual bool IsEmpty() const;
    virtual Manipulator* CreateManipulator() const;
};

#endif /* TEXTSHAPE_H */
