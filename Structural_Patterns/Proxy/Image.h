#ifndef IMAGE_H
#define IMAGE_h

#include "Graphic.h"

class Image : public Graphic {
public:
    Image(const char* file);  // loads image from a file
    virtual ~Image();

    virtual void Draw(const Point& at);
    virtual void HandleMouse(Event& event);

    virtual const Point& GetExtent();

    virtual void Load(istream& from);
    virtual void Save(ostream& to);
private:
    Point _extent;
    char* _fileName;
};

#endif /* IMAGE_H */
