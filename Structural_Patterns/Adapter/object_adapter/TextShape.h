#ifndef TEXTSHAPE_H
#define TEXTSHAPE_H

#include "Manipulator.h"
#include "Point.h"
#include "Shape.h"
#include "TextView.h"

class TextShape : public Shape {
public:
    TextShape(TextView*);

    virtual void BoundingBox(
        Point& bottomLeft, Point& topRight
    ) const;
    virtual bool IsEmpty() const;
    virtual Manipulator* CreateManipulator() const;
private:
    TextView* _text;
};

#endif /* TEXTSHAPE_H */
