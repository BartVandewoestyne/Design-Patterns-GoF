#include "Singleton.h"

#include "List.h"
#include "NameSingletonPair.h"

#include <cstdlib>

Singleton* Singleton::_instance = 0;
List<NameSingletonPair>* Singleton::_registry = 0;

Singleton* Singleton::Instance() {

    std::cout << "Singleton::Instance()" << std::endl;

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
    std::cout << "Singleton::Register(const char*, Singleton*)" << std::endl;

    NameSingletonPair pair(name, singleton);
    _registry->Append(pair);
}

Singleton* Singleton::Lookup(const char* name)
{

    std::cout << "Singleton::Lookup(const char*)" << std::endl;

    Iterator<NameSingletonPair>* i = _registry->CreateIterator();
    for (i->First(); !i->IsDone(); i->Next()) {
        NameSingletonPair pair = i->CurrentItem();
        if (pair.GetName() == name) {
            return pair.GetSingleton();
        }
    }
    return 0;
}
