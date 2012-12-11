#ifndef DROP_SHADOW_DECORATOR_H
#define DROP_SHADOW_DECORATOR_H

#include "Decorator.h"

class VisualComponent;

class DropShadowDecorator : public Decorator {
public:
    DropShadowDecorator(VisualComponent*);
};

#endif /* DROP_SHADOW_DECORATOR_H */
