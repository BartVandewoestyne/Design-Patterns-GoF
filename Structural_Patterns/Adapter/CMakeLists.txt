set(adapter_SRCS
    TextManipulator.cpp
    TextView.cpp)

add_library(adapter SHARED ${adapter_SRCS})

include_directories(../../Foundation_Classes)

add_subdirectory(class_adapter)
add_subdirectory(object_adapter)
