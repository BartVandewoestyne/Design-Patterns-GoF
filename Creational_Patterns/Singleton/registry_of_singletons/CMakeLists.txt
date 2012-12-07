include_directories(../../../Foundation_Classes
                    ../../../Behavioral_Patterns/Iterator)

set(singleton_SRCS
    MySingleton.cpp
    NameSingletonPair.cpp
    Singleton.cpp)

add_library(singleton2 ${singleton_SRCS})
