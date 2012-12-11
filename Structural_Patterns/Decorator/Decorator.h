#ifndef DECORATOR_H
#define DECORATOR_H

#include "VisualComponent.h"

class Decorator : public VisualComponent {
public:
    Decorator(VisualComponent*);

    virtual void Draw();
    virtual void Resize();
    // ...
private:
    VisualComponent* _component;
};

#endif /* DECORATOR_H */
