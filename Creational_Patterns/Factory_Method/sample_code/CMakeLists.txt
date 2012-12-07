include_directories(../..)

set(factory_method_sample_code_SRCS
    BombedMazeGame.cpp
    MazeGame.cpp)

add_library(factory_method_sample_code SHARED ${factory_method_sample_code_SRCS})

add_executable(factory_method_sample_code1 main.cpp)

target_link_libraries(factory_method_sample_code1 factory_method_sample_code creational_patterns)
