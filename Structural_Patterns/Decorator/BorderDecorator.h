#ifndef BORDER_DECORATOR_H
#define BORDER_DECORATOR_H

#include "Decorator.h"

class BorderDecorator : public Decorator {
public:
    BorderDecorator(VisualComponent*, int borderWidth);

    virtual void Draw();
private:
    void DrawBorder(int);
private:
    int _width;
};

#endif /* BORDER_DECORATOR_H */
