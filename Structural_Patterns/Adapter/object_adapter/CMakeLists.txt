add_library(object_adapter SHARED TextShape.cpp)

target_include_directories(object_adapter PRIVATE .. ../../../Foundation_Classes)
target_link_libraries(object_adapter PRIVATE adapter foundation_classes)
