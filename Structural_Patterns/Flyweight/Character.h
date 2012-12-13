#ifndef CHARACTER_H
#define CHARACTER_H

#include "Glyph.h"

class Window;
class GlyphContext;

class Character : public Glyph {
public:
    Character(char);

    virtual void Draw(Window*, GlyphContext&);
private:
    char _charcode;
};

#endif /* CHARACTER_H */
