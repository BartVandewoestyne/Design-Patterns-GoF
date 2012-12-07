#include <cstdlib>
#include "Singleton.h"
#include "NameSingletonPair.h"

Singleton* Singleton::Instance () {
    if (_instance == 0) {
        const char* singletonName = getenv("SINGLETON");
        // user or environment supplies this at startup

        _instance = Lookup(singletonName);
        // Lookup returns 0 if there's no such singleton
    }
    return _instance;
}

void Singleton::Register(const char* name, Singleton* singleton)
{
    NameSingletonPair pair(name, singleton);
    _registry->Append(pair);
}

Singleton* Singleton::Lookup(const char* name)
{
    Iterator<NameSingletonPair>* i = _registry->CreateIterator();
    for (i->First(); !i->IsDone(); i->Next()) {
        NameSingletonPair pair = i->CurrentItem();
        if (pair.GetName() == name) {
            return pair.GetSingleton();
        }
    }
    return 0;
}
