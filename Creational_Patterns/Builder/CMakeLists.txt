set(builder_SRCS
    CountingMazeBuilder.cpp
    MazeBuilder.cpp
    StandardMazeBuilder.cpp)

add_library(builder SHARED ${builder_SRCS})
target_include_directories(builder PUBLIC ../)
target_link_libraries(builder PUBLIC creational_patterns)

add_executable(builder1 builder1.cpp)
add_executable(builder2 builder2.cpp)

target_link_libraries(builder1 PRIVATE builder)
target_link_libraries(builder2 PRIVATE builder)
