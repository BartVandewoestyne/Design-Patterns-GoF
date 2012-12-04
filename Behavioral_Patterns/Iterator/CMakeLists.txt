include_directories(./ ../../Foundation_Classes)

set(iterator_SRCS
    Employee.cpp)

add_library(iterator SHARED ${iterator_SRCS})

add_executable(iterator1 iterator1.cpp)
add_executable(internal_list_iterator internal_list_iterator.cpp)
add_executable(external_iterator external_iterator.cpp)

target_link_libraries(iterator1 iterator)
target_link_libraries(internal_list_iterator iterator)
target_link_libraries(external_iterator iterator)
