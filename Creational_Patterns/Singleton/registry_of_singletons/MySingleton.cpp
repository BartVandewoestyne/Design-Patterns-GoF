#include "MySingleton.h"

static MySingleton theSingleton;

MySingleton::MySingleton() {
    // ...
    Singleton::Register("MySingleton", this);
}
