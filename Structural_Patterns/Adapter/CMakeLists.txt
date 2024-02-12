set(adapter_SRCS
    Shape.cpp
    TextManipulator.cpp
    TextView.cpp)

add_library(adapter SHARED ${adapter_SRCS})
target_include_directories(adapter PRIVATE ../../Foundation_Classes)

add_subdirectory(class_adapter)
add_subdirectory(object_adapter)
