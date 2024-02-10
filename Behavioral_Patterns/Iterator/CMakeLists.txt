set(iterator_SRCS
    Employee.cpp)

add_library(iterator SHARED ${iterator_SRCS})

add_executable(iterator1 iterator1.cpp)
add_executable(internal_list_iterator internal_list_iterator.cpp)
add_executable(external_iterator external_iterator.cpp)

target_include_directories(iterator1 PRIVATE ./ ../../Foundation_Classes)
target_include_directories(internal_list_iterator PRIVATE ./ ../../Foundation_Classes)
target_include_directories(external_iterator PRIVATE ./ ../../Foundation_Classes)

target_link_libraries(iterator1 iterator)
target_link_libraries(internal_list_iterator iterator)
target_link_libraries(external_iterator iterator)
