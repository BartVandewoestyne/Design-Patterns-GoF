#include "Currency.h"
#include "Bus.h"
#include "Watt.h"

Bus::Bus(const char* name)
  : CompositeEquipment(name)
{
}

Watt Bus::Power()
{
  Watt w;
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
