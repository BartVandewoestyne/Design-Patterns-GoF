#ifndef SINGLETON_H
#define SINGLETON_H

#include "List.h"
#include "NameSingletonPair.h"

class Singleton {
public:
    static void Register(const char* name, Singleton*);
    static Singleton* Instance();
protected:
    static Singleton* Lookup(const char* name);
private:
    static Singleton* _instance;
    static List<NameSingletonPair>* _registry;
};

#endif /* SINGLETON_H */
