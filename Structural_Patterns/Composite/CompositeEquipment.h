#ifndef COMPOSITE_EQUIPMENT_H
#define COMPOSITE_EQUIPMENT_H

#include "Currency.h"
#include "Equipment.h"
#include "List.h"
#include "Watt.h"

class CompositeEquipment : public Equipment {
public:
    virtual ~CompositeEquipment();

    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();

    virtual void Add(Equipment*);
    virtual void Remove(Equipment*);
    virtual Iterator* CreateIterator();

protected:
    CompositeEquipment(const char*);
private:
    List _equipment;
};

#endif /* COMPOSITE_EQUIPMENT_H */
