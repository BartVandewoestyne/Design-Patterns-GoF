#include "FloppyDisk.h"

FloppyDisk::FloppyDisk(const char* name)
  : Equipment(name)
{}

FloppyDisk::~FloppyDisk()
{}

Watt FloppyDisk::Power()
{
  Watt w(10);
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
