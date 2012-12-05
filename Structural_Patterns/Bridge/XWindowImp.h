#ifndef X_WINDOW_IMP_H
#define X_WINDOW_IMP_H

#include "Coord.h"
#include "WindowImp.h"

class Display;
class Drawable {};
class GC {};

class XWindowImp : public WindowImp {
public:
    XWindowImp();

    virtual void DeviceRect(Coord, Coord, Coord, Coord);
    // remainder of public interface...
private:
    // lots of X window system-specific state, including:
    void XDrawRectangle(Display*, Drawable, GC, int, int, int, int);
    Display* _dpy;
    Drawable _winid;  // window id
    GC _gc;           // window graphic context
};

#endif /* X_WINDOW_IMP_H */
