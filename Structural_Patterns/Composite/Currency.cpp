#include "Currency.h"

#include <iostream>

using namespace std;

Currency::Currency(int c)
{
  // TODO: create an implementation
}

Currency& Currency::operator+=(const Currency& rhs)
{
   // TODO: define private members for Currency and implement this operator.
   return *this;
}


Currency operator+(const Currency& lhs, const Currency& rhs)
{
    Currency ret(lhs);  // copy lhs into a local object that we'll return
    ret += rhs;         // add in the contents of rhs
    return ret;         // return ret by value
}


ostream& operator<<(ostream& out, const Currency& curr)
{
  out << "XXX EUR";
  return out;
}
