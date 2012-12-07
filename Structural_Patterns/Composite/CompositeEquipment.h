#ifndef COMPOSITE_EQUIPMENT_H
#define COMPOSITE_EQUIPMENT_H

#include "Equipment.h"
#include "List.h"

class CompositeEquipment : public Equipment {
public:
    virtual ~CompositeEquipment();

    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();

    virtual void Add(Equipment*);
    virtual void Remove(Equipment*);
    virtual Iterator<Equipment*>* CreateIterator(); // ERRATUM: book did not have template argument here.

protected:
    CompositeEquipment(const char*);
private:
    List<Equipment*> _equipment; // ERRATUM: book did not have template argument here.
};

#endif /* COMPOSITE_EQUIPMENT_H */
