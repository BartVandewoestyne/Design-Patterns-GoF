include_directories(../../../Foundation_Classes
                    ../../../Behavioral_Patterns/Iterator)

set(singleton_SRCS
    MySingleton.cpp
    NameSingletonPair.cpp
    Singleton.cpp
    main.cpp)

add_executable(registry_of_singletons ${singleton_SRCS})
