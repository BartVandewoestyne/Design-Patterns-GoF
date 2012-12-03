#include "CompositeEquipment.h"
#include "Currency.h"
#include "Equipment.h"
#include "Iterator.h"

CompositeEquipment::CompositeEquipment(const char* name)
  : Equipment(name)
{
}

Currency CompositeEquipment::NetPrice () {
    Iterator* i = CreateIterator();
    Currency total = 0;

    for (i->First(); !i->IsDone(); i->Next()) {
        total += i->CurrentItem()->NetPrice();
    }
    delete i;
    return total;
}
