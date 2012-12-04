#include <iostream>

#include "Employee.h"

void Employee::Print() const
{
  std::cout << "Employee " << this << std::endl;
}
