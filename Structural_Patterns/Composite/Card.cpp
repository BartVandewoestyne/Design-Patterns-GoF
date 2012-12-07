#include "Card.h"
#include "Equipment.h"

Card::Card(const char* name)
  : Equipment(name)
{}

Card::~Card()
{}

Watt Card::Power()
{
  Watt w(3);
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
