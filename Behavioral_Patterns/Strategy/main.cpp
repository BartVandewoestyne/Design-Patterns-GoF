#include "Composition.h"
#include "SimpleCompositor.h"
#include "TeXCompositor.h"
#include "ArrayCompositor.h"

int main()
{
    Composition* quick = new Composition(new SimpleCompositor);
    Composition* slick = new Composition(new TeXCompositor);
    Composition* iconic = new Composition(new ArrayCompositor(100));

    quick->Repair();
    slick->Repair();
    iconic->Repair();
}
