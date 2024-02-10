set(proxy_SRCS
    Graphic.cpp
    TextDocument.cpp
    Image.cpp
    ImageProxy.cpp)

add_executable(proxy main.cpp)
add_library(proxylib SHARED ${proxy_SRCS})
target_include_directories(proxylib PUBLIC ../../Foundation_Classes)
target_link_libraries(proxylib foundation_classes)
target_link_libraries(proxy proxylib)
