include_directories(../../Foundation_Classes)
include_directories(../../Behavioral_Patterns/Iterator)

set(composite_SRCS
    Bus.cpp
    Cabinet.cpp
    Card.cpp
    Chassis.cpp
    CompositeEquipment.cpp
    Equipment.cpp
    FloppyDisk.cpp)

add_library(composite SHARED ${composite_SRCS})

add_executable(composite1 main.cpp)

target_link_libraries(composite1 composite)
