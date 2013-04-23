include_directories(./ ../../Foundation_Classes)
include_directories(../Iterator)

set(observer_SRCS
    ClockTimer.cpp
    DigitalClock.cpp
    Subject.cpp)

add_library(observer SHARED ${observer_SRCS})
target_link_libraries(observer foundation_classes)

#add_executable(observer1 Observer.cpp)
#target_link_libraries(observer1 observer)
