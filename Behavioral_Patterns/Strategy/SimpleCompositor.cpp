#include "SimpleCompositor.h"

#include <iostream>

SimpleCompositor::SimpleCompositor()
{
    std::cout << "SimpleCompositor::SimpleCompositor()" << std::endl;
}

int SimpleCompositor::Compose(
    Coord natural[], Coord stretch[], Coord shrink[],
    int componentCount, int lineWidth, int breaks[]
)
{
    std::cout << "SimpleCompositor::Compose(...)" << std::endl;

    // Ignores stretchability of the components, taking only their
    // natural widths into account.

    return 0;
}
