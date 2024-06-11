#include "Font.h"
#include "GlyphContext.h"

int main()
{

    // Assuming we're at index 102 in the traversal (see 'BTree structure for
    // font intormation' in the book page 202), then the following code sets
    // the font of each character in the word "expect" to that of the
    // surrounding text (that is, times12, an instance of Font for 12-point
    // Times Roman).
    GlyphContext gc;
    Font* times12 = new Font("Times-Roman-12");
    Font* timesItalic12 = new Font("Times-Italic-12");
    // ...
    gc.SetFont(times12, 6);

    gc.Insert(6);
    gc.SetFont(timesItalic12, 6);
}
