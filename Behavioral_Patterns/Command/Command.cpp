#include "Command.h"

#include <iostream>

Command::Command()
{
    std::cout << "Command::Command()" << std::endl;
}

Command::~Command()
{
    std::cout << "Command::~Command()" << std::endl;
}
