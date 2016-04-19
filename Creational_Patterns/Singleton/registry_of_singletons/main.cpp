/*
 * Make sure you set the environment variable SINGLETON before you run this
 * program.  Currently, the only option is "MySingleton".
 */

#include "MySingleton.h"
#include "Singleton.h"

int main()
{
    Singleton* mySingleton= MySingleton::Instance();

    Singleton::Register("MySingleton", mySingleton);
    Singleton* singleton = Singleton::Instance();
}
