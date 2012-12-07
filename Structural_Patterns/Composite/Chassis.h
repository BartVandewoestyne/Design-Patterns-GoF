#ifndef CHASSIS_H
#define CHASSIS_H

#include "CompositeEquipment.h"

class Chassis : public CompositeEquipment {
public:
    Chassis(const char*);
    virtual ~Chassis();

    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();
};

#endif /* CHASSIS_H */
