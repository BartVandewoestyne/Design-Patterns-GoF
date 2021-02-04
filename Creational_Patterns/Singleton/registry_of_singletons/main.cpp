/*
 * Make sure you set the environment variable SINGLETON before you run this
 * program.  Currently, the only option is "MySingleton".
 */

#include "MySingleton.h"
#include "Singleton.h"

int main()
{
    // TODO: commenting this line in shows that it is still possible to
    // create instances of MySingleton using its default constructor.  If
    // we try to avoid that by making the MySingleton() constructor protected
    // instead of public, then the line
    //     static MySingleton theSingleton;
    // in MySingleton.cpp gives an error at compile time:
    //   error C2248: 'MySingleton::MySingleton': cannot access protected member declared in class 'MySingleton'
    //MySingleton foo;

    Singleton* mySingleton= MySingleton::Instance();

    Singleton::Register("MySingleton", mySingleton);
    Singleton* singleton = Singleton::Instance();
}
