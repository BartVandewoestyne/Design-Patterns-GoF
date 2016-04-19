#include "Singleton.h"

#include <iostream>

Singleton* Singleton::_instance = 0;

Singleton::Singleton() {
    std::cout << "Singleton::Singleton()" << std::endl;
}

Singleton* Singleton::Instance () {
    if (_instance == 0) {
        _instance = new Singleton;
    }
    return _instance;
}
