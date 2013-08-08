#include_directories(./ ../../Foundation_Classes)

set(chain_of_responsibility_SRCS
    Handler.cpp
    HelpHandler.cpp
    ExtendedHandler.cpp
    Widget.cpp
    Button.cpp
    Dialog.cpp
    Application.cpp
    chain_of_responsibility1.cpp)

add_library(chain_of_responsibility SHARED ${chain_of_responsibility_SRCS})

add_executable(chain_of_responsibility1 chain_of_responsibility1.cpp)

target_link_libraries(chain_of_responsibility1 chain_of_responsibility)
