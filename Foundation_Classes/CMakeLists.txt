set(foundation_classes_SRCS
    Coord.cpp
    Point.cpp
    Rect.cpp)

add_library(foundation_classes SHARED ${foundation_classes_SRCS})
target_include_directories(foundation_classes PRIVATE ../Behavioral_Patterns/Iterator)
