#ifndef PM_WINDOW_IMP_H
#define PM_WINDOW_IMP_H

#include "WindowImp.h"

struct PPOINTL {
    Coord x;
    Coord y;
};

typedef int HPS;

const int GPI_ERROR = 1;

class PMWindowImp : public WindowImp {
public:
    PMWindowImp();
    virtual void DeviceRect(Coord, Coord, Coord, Coord);

    // remainder of public interface...
private:
    // lots of PM window system-specific state, including:
    bool GpiBeginPath(HPS hps, long i) const;
    bool GpiSetCurrentPosition(HPS hps, PPOINTL* p) const;
    int GpiPolyLine(HPS hps, long i, PPOINTL* p) const;
    bool GpiEndPath(HPS hps) const;
    void GpiStrokePath(HPS hps, long, long);
    HPS _hps;
};

#endif /* PM_WINDOW_IMP_H */
