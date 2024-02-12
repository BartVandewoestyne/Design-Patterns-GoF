add_library(class_adapter SHARED TextShape.cpp)

target_include_directories(class_adapter PRIVATE .. ../../../Foundation_Classes)
target_link_libraries(class_adapter PRIVATE adapter foundation_classes)
