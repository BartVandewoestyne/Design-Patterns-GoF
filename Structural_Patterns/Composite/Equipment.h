#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include "Iterator.h"

typedef int Currency;
typedef int Watt;

class Equipment {
public:
    virtual ~Equipment();

    const char* Name() { return _name; }

    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();

    virtual void Add(Equipment*);
    virtual void Remove(Equipment*);
    virtual Iterator<Equipment*>* CreateIterator(); // ERRATUM: book had different iterator here.
protected:
    Equipment(const char* name);
private:
    const char* _name;
};

#endif /* EQUIPMENT_H */
