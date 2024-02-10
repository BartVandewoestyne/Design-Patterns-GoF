set(singleton_SRCS
    MySingleton.cpp
    NameSingletonPair.cpp
    Singleton.cpp
    main.cpp)

add_executable(registry_of_singletons ${singleton_SRCS})
target_include_directories(registry_of_singletons PRIVATE ../../../Foundation_Classes ../../../Behavioral_Patterns/Iterator)
