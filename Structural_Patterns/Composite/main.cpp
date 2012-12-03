#include <iostream>

#include "Bus.h"
#include "Cabinet.h"
#include "Card.h"
#include "Chassis.h"
#include "FloppyDisk.h"

using namespace std;

int main()
{
    Cabinet* cabinet = new Cabinet("PC Cabinet");
    Chassis* chassis = new Chassis("PC Chassis");
    
    cabinet->Add(chassis);
    
    Bus* bus = new Bus("MCA Bus");
    bus->Add(new Card("16Mbs Token Ring"));
    
    chassis->Add(bus);
    chassis->Add(new FloppyDisk("3.5in Floppy"));
    
    cout << "The net price is " << chassis->NetPrice() << endl;
}
