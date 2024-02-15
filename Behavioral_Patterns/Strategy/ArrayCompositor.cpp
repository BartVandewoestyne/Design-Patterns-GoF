#include "ArrayCompositor.h"

#include <iostream>

ArrayCompositor::ArrayCompositor(int interval)
{
    std::cout << "Constructing ArrayCompositor object with interval " << interval << "." << std::endl;
}

int ArrayCompositor::Compose(
    Coord /*natural*/[], Coord /*stretch*/[], Coord /*shrink*/[],
    int /*componentCount*/, int /*lineWidth*/, int /*breaks*/[]
)
{
    std::cout << "ArrayCompositor::Compose(...)" << std::endl;

    // Ignores everything passed to this function.

    return 0;
}
