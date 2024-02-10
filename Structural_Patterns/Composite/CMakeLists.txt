set(composite_SRCS
    Bus.cpp
    Cabinet.cpp
    Card.cpp
    Chassis.cpp
    CompositeEquipment.cpp
    Equipment.cpp
    FloppyDisk.cpp)

add_library(composite SHARED ${composite_SRCS})
target_include_directories(composite PUBLIC ../../Foundation_Classes ../../Behavioral_Patterns/Iterator)

add_executable(composite1 main.cpp)

target_link_libraries(composite1 composite)
