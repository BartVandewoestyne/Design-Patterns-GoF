#include "Currency.h"
#include "Card.h"
#include "Equipment.h"
#include "Watt.h"

Card::Card(const char* name)
  : Equipment(name)
{
}

Watt Card::Power()
{
  Watt w;
  return w;
}

Currency Card::NetPrice()
{
  Currency c(11);
  return c;
}

Currency Card::DiscountPrice()
{
  Currency c(6);
  return c;
}
