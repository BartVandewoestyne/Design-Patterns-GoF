#include "Cabinet.h"

Cabinet::Cabinet(const char* name)
  : CompositeEquipment(name)
{}

Cabinet::~Cabinet()
{}

Watt Cabinet::Power()
{
  Watt w(2);
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
