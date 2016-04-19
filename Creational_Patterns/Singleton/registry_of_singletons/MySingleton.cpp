#include "MySingleton.h"

static MySingleton theSingleton;

MySingleton::MySingleton() {

    std::cout << "MySingleton::MySingleton()" << std::endl;

    Singleton::Register("MySingleton", this);
}
