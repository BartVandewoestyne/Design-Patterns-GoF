set(observer_SRCS
    ClockTimer.cpp
    DigitalClock.cpp
    Observer.cpp
    Subject.cpp)

add_library(observer SHARED ${observer_SRCS})
target_include_directories(observer PRIVATE ./ ../../Foundation_Classes ../Iterator)
target_link_libraries(observer foundation_classes)

#add_executable(observer1 Observer.cpp)
#target_link_libraries(observer1 observer)
