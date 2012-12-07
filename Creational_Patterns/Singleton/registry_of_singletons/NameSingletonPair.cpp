#include "NameSingletonPair.h"

NameSingletonPair::NameSingletonPair(const char* name, Singleton* singleton)
  : _name(name), _singleton(singleton)
{}

const char* NameSingletonPair::GetName() const
{
    return _name;
}

Singleton* NameSingletonPair::GetSingleton() const
{
    return _singleton;
}
