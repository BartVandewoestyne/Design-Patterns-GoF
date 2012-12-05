set(bridge_SRCS
    ApplicationWindow.cpp
    IconWindow.cpp
    PMWindowImp.cpp
    View.cpp
    Window.cpp
    WindowSystemFactory.cpp
    XWindowImp.cpp)

add_library(bridge SHARED ${bridge_SRCS})

include_directories(../../Foundation_Classes)
