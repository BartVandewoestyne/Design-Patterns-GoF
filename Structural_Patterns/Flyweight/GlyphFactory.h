#ifndef GLYPH_FACTORY_H
#define GLYPH_FACTORY_H

class Character;
class Column;
class Row;

const int NCHARCODES = 128;

class GlyphFactory {
public:
    GlyphFactory();
    virtual ~GlyphFactory();

    virtual Character* CreateCharacter(char);
    virtual Row* CreateRow();
    virtual Column* CreateColumn();
    // ...
private:
    Character* _character[NCHARCODES];
};

#endif /* GLYPH_FACTORY_H */
