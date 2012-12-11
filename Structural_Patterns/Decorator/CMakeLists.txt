set(decorator_SRCS
    BorderDecorator.cpp
    Decorator.cpp
    ScrollDecorator.cpp
    DropShadowDecorator.cpp
    VisualComponent.cpp
    Window.cpp)

add_library(decorator SHARED ${decorator_SRCS})

add_executable(decorator1 decorator1.cpp)

target_link_libraries(decorator1 decorator)
