include_directories(../Behavioral_Patterns/Iterator)

set(foundation_classes_SRCS
    Point.cpp
    Rect.cpp)

add_library(foundation_classes SHARED ${foundation_classes_SRCS})
