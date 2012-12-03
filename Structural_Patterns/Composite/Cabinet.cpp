#include "Currency.h"
#include "Cabinet.h"
#include "Watt.h"

Cabinet::Cabinet(const char* name)
  : CompositeEquipment(name)
{
}

Watt Cabinet::Power()
{
  Watt w;
  return w;
}

Currency Cabinet::NetPrice()
{
  Currency c(30);
  return c;
}

Currency Cabinet::DiscountPrice()
{
  Currency c(26);
  return c;
}
