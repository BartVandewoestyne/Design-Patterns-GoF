#include "Currency.h"
#include "Chassis.h"
#include "Watt.h"

Chassis::Chassis(const char* name)
  : CompositeEquipment(name)
{
}

Watt Chassis::Power()
{
  Watt w;
  return w;
}

Currency Chassis::NetPrice()
{
  Currency c(40);
  return c;
}

Currency Chassis::DiscountPrice()
{
  Currency c(36);
  return c;
}
