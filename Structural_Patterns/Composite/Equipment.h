#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "Currency.h"
#include "Watt.h"

class Iterator;

class Equipment {
public:
    virtual ~Equipment();

    const char* Name() { return _name; }

    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();

    virtual void Add(Equipment*);
    virtual void Remove(Equipment*);
    virtual Iterator* CreateIterator();
protected:
    Equipment(const char*);
private:
    const char* _name;
};

#endif /* EQUIPMENT_H */
