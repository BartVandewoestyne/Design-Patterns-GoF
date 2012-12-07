#include "Chassis.h"

Chassis::Chassis(const char* name)
  : CompositeEquipment(name)
{}

Chassis::~Chassis()
{}

Watt Chassis::Power()
{
  Watt w(4);
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
