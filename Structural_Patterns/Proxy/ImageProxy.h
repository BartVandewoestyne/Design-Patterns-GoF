#ifndef IMAGE_PROXY_H
#define IMAGE_PROXY_H

#include "Graphic.h"
#include "Image.h"
#include "Point.h"

class Event;

class ImageProxy : public Graphic {
public:
    ImageProxy(const char* imageFile);
    virtual ~ImageProxy();

    virtual void Draw(const Point& at);
    virtual void HandleMouse(Event& event);

    virtual const Point& GetExtent();

    virtual void Load(istream& from);
    virtual void Save(ostream& to);
protected:
    Image* GetImage();
private:
    Image* _image;
    Point _extent;
    char* _fileName;
};

#endif /* IMAGE_PROXY_H */
