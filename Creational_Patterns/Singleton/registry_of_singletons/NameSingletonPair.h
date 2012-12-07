#ifndef NAME_SINGLETON_PAIR_H
#define NAME_SINGLETON_PAIR_H

class Singleton;

class NameSingletonPair {
public:
    NameSingletonPair(const char* name, Singleton* singleton);
    const char* GetName() const;
    Singleton* GetSingleton() const;
protected:
    const char* _name;
    Singleton* _singleton;
};

#endif /* NAME_SINGLETON_PAIR_H */
