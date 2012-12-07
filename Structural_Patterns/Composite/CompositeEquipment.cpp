#include "CompositeEquipment.h"
#include "Equipment.h"
#include "Iterator.h"

CompositeEquipment::CompositeEquipment(const char* name)
  : Equipment(name)
{}

CompositeEquipment::~CompositeEquipment()
{}


Watt CompositeEquipment::Power() {
    Iterator<Equipment*>* i = CreateIterator(); // ERRATUM: book had different iterator.
    Watt total = 0;

    for (i->First(); !i->IsDone(); i->Next()) {
        total += i->CurrentItem()->Power();
    }
    delete i;
    return total;
}


Currency CompositeEquipment::NetPrice () {
    Iterator<Equipment*>* i = CreateIterator();
    Currency total = 0;

    for (i->First(); !i->IsDone(); i->Next()) {
        total += i->CurrentItem()->NetPrice();
    }
    delete i;
    return total;
}


Currency CompositeEquipment::DiscountPrice () {
    Iterator<Equipment*>* i = CreateIterator();
    Currency total = 0;

    for (i->First(); !i->IsDone(); i->Next()) {
        total += i->CurrentItem()->DiscountPrice();
    }
    delete i;
    return total;
}

void CompositeEquipment::Add(Equipment* equipment)
{
    _equipment.Append(equipment);
}

void CompositeEquipment::Remove(Equipment* equipment)
{
    _equipment.Remove(equipment);
}

Iterator<Equipment*>* CompositeEquipment::CreateIterator()
{
    return _equipment.CreateIterator();
}
