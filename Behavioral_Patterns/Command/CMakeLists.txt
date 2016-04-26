include_directories(./ ../Iterator ../../Foundation_Classes)

set(command_SRCS
    Application.cpp
    Command.cpp
    Document.cpp
    MyClass.cpp
    OpenCommand.cpp
    PasteCommand.cpp
    MacroCommand.cpp)

add_library(command1 SHARED ${command_SRCS})
target_link_libraries(command1 iterator)

add_executable(command main.cpp)
target_link_libraries(command command1)
