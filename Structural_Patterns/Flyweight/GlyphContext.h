#ifndef GLYPH_CONTEXT_H
#define GLYPH_CONTEXT_H

class BTree;
class Font;

class GlyphContext {
public:
    GlyphContext();
    virtual ~GlyphContext();

    virtual void Next(int step = 1);
    virtual void Insert(int quantity = 1);

    virtual Font* GetFont();
    virtual void SetFont(Font*, int span = 1);
private:
    int _index;
    BTree* _fonts;
};

#endif /* GLYPH_CONTEXT_H */
