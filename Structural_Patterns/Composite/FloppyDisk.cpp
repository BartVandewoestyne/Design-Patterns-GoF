#include "Currency.h"
#include "FloppyDisk.h"
#include "Watt.h"

FloppyDisk::FloppyDisk(const char* name)
  : Equipment(name)
{
}

Watt FloppyDisk::Power()
{
  Watt w;
  return w;
}

Currency FloppyDisk::NetPrice()
{
  Currency c(10);
  return c;
}

Currency FloppyDisk::DiscountPrice()
{
  Currency c(5);
  return c;
}
