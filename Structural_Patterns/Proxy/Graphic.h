#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "Point.h"

class Event;

class Graphic {
public:
    virtual ~Graphic();

    virtual void Draw(const Point& at) = 0;
    virtual void HandleMouse(Event& event) = 0;

    virtual const Point& GetExtent() = 0;

    virtual void Load(istream& from) = 0;
    virtual void Save(ostream& to) = 0;
protected:
    Graphic();
};

#endif /* GRAPHIC_H */
