#include <cstdlib>

#include "singleton.h"

Singleton* Singleton::_instance = nullptr;

Singleton* Singleton::Instance() {
    if (_instance == nullptr) {
        const char* singletonName = std::getenv("SINGLETON");
        // user or environment supplies this at startup

        _instance = Lookup(singletonName);
        // Lookup returns nullptr if there's no such singleton
    }
    return _instance;
}

