#include "Glyph.h"

#include <iostream>
using namespace std;

Glyph::Glyph()
{
    cout << "Glyph::Glyph()" << endl;
}

Glyph::~Glyph()
{
    cout << "Glyph::~Glyph()" << endl;
}   
   
void Glyph::Draw(Window*, GlyphContext&)
{
    cout << "Glyph::Draw(Window*, GlyphContext&)" << endl;   
}

void Glyph::SetFont(Font*, GlyphContext&)
{
    cout << "Glyph::SetFont(Font*, GlyphContext&)" << endl;
}

Font* Glyph::GetFont(GlyphContext&)
{
    cout << "Glyph::GetFont(GlyphContext&)" << endl;
    return 0;
}   

void Glyph::First(GlyphContext&){   
    cout << "Glyph::First(GlyphContext&)" << endl;
}   

void Glyph::Next(GlyphContext&)
{
    cout << "Glyph::Next(GlyphContext&)" << endl;
}   

bool Glyph::IsDone(GlyphContext&)
{
    cout << "Glyph::IsDone(GlyphContext&)" << endl;   
    return 0;   
}   

Glyph* Glyph::Current(GlyphContext&)
{
    cout << "Glyph* Glyph::Current(GlyphContext&)" << endl;
    return 0;   
}   

void Glyph::Insert(Glyph*, GlyphContext&)
{
    cout << "void Glyph::Insert(Glyph*, GlyphContext&)" << endl;
}

void Glyph::Remove(GlyphContext&)
{
    cout << "void Glyph::Remove(GlyphContext&)" << endl;
}
