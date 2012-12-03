#ifndef PM_WINDOW_IMP_H
#define PM_WINDOW_IMP_H

class PMWindowImp : public WindowImp {
public:
    PMWindowImp();
    virtual void DeviceRect(Coord, Coord, Coord, Coord);

    // remainder of public interface...
private:
    // lots of PM window system-specific state, including:
    HPS _hps;
};

#endif /* PM_WINDOW_IMP_H */
