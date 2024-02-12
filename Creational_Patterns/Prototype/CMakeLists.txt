set(prototype_SRCS
    MazePrototypeFactory.cpp)

add_library(prototype SHARED ${prototype_SRCS})
target_include_directories(prototype PUBLIC ..)
target_link_libraries(prototype PUBLIC creational_patterns)

add_executable(prototype1 prototype1.cpp)

target_link_libraries(prototype1 PRIVATE prototype)
