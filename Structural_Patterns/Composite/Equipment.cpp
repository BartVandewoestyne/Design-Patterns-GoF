#include "Equipment.h"

Equipment::Equipment(const char* name)
{
    _name = name;
}

Equipment::~Equipment()
{}

Watt Equipment::Power()
{
    // TODO: throw exception because this should never called?
    return 0;
}

Currency Equipment::NetPrice()
{
    // TODO: throw exception because this should never called?
    return 0;
}

Currency Equipment::DiscountPrice()
{
    // TODO: throw exception because this should never called?
    return 0;
}

void Equipment::Add(Equipment*)
{
    // TODO: throw exception, because this should never be called!
}

void Equipment::Remove(Equipment*)
{
    // TODO: throw exception, because this should never be called!
}

Iterator<Equipment*>* Equipment::CreateIterator()
{
    // TODO: return a NullIterator
    return 0;
}
