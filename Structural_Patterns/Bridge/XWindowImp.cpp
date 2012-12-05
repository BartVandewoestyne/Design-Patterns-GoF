#include "XWindowImp.h"
#include "Coord.h"

void XWindowImp::DeviceRect (
    Coord x0, Coord y0, Coord x1, Coord y1
) {
    int x = round(min(x0, x1));
    int y = round(min(y0, y1));
    int w = round(abs(x0 - x1));
    int h = round(abs(y0 - y1));
    XDrawRectangle(_dpy, _winid, _gc, x, y, w, h);
}

void XWindowImp::XDrawRectangle(Display*, Drawable, GC, int, int, int, int)
{
}
