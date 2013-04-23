#ifndef DIGITAL_CLOCK_H
#define DIGITAL_CLOCK_H

#include "Widget.h"
#include "Observer.h"

class ClockTimer;
class Subject;

class DigitalClock: public Widget, public Observer {
public:
    DigitalClock(ClockTimer*);
    virtual ~DigitalClock();

    virtual void Update(Subject*);
        // overrides Observer operation

    virtual void Draw();
        // overrides Widget operation;
        // defines how to draw the digital clock
private:
    ClockTimer* _subject;
};

#endif /* DIGITAL_CLOCK_H */
