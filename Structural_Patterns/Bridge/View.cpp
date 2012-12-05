#include "View.h"
#include <iostream>
using namespace std;

void View::DrawOn(const ApplicationWindow* w) const
{
    cout << "DrawOn(" << w << ")" << endl;
}
