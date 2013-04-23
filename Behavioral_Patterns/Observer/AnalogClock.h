#ifndef ANALOG_CLOCK_H
#define ANALOG_CLOCK_H

#include "Observer.h"
#include "Widget.h"

class AnalogClock : public Widget, public Observer {
public:
    AnalogClock(ClockTimer*);
    virtual void Update(Subject*);
    virtual void Draw();
    // ...
};

#endif /* ANALOG_CLOCK_H */
