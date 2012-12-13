#include "Font.h"
#include "GlyphContext.h"

int main()
{
    GlyphContext gc;
    Font* times12 = new Font("Times-Roman-12");
    Font* timesItalic12 = new Font("Times-Italic-12");
    // ...
    
    gc.SetFont(times12, 6);

    gc.Insert(6);
    gc.SetFont(timesItalic12, 6);
}
