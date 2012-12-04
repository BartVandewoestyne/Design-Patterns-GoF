include_directories(./ ../../Foundation_Classes)

set(iterator_SRCS
    Employee.cpp)

add_library(iterator SHARED ${iterator_SRCS})

add_executable(iterator1 main.cpp)

target_link_libraries(iterator1 iterator)
