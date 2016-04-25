#ifndef TEX_COMPOSITOR_H
#define TEX_COMPOSITOR_H

#include "Compositor.h"

class Coord;

class TeXCompositor : public Compositor {
public:
    TeXCompositor();

    virtual int Compose(
        Coord natural[], Coord stretch[], Coord shrink[],
        int componentCount, int lineWidth, int breaks[]
    );
    // ...
};

#endif  // TEX_COMPOSITOR_H
