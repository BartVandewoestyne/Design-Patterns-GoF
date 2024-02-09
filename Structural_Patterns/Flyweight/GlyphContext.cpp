// TODO: implement these.
#include "GlyphContext.h"

GlyphContext::GlyphContext()
{}

GlyphContext::~GlyphContext()
{}

void GlyphContext::Next(int step)
{
    // TODO: increment _index as the traversal proceeds
    // (see book page 202).
}

void GlyphContext::Insert(int quantity1)
{}

Font* GlyphContext::GetFont()
{
    // TODO: GlyphContext::GetFont() uses the index as a key into a BTree
    // structure that stores the glyph-to-font mapping.  Each node in the tree
    // is labeled with the length of the string for which it gives font
    // information.  Leaves in the tree point to a font, while interior nodes
    // break the string into substrings, one for each child (see page 202-203
    // in the book).
    return 0;
}

void GlyphContext::SetFont(Font*, int span)
{}

//    int _index;
//    BTree* _fonts;
