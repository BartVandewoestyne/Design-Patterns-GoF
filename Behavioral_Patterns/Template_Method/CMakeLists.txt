set(template_method_SRCS
    Application.cpp
    Document.cpp
    DocumentStore.cpp)

add_library(template_method_lib SHARED ${template_method_SRCS})
target_include_directories(template_method_lib PUBLIC ./)

add_executable(template_method1 main1.cpp)
target_link_libraries(template_method1 template_method_lib)
