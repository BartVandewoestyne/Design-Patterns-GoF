#include "Bus.h"

Bus::Bus(const char* name)
  : CompositeEquipment(name)
{}

Bus::~Bus()
{}

Watt Bus::Power()
{
  Watt w(1);
  return w;
}

Currency Bus::NetPrice()
{
  Currency c(20);
  return c;
}

Currency Bus::DiscountPrice()
{
  Currency c(16);
  return c;
}
