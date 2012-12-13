#include_directories(../../Foundation_Classes)
#include_directories(../../Behavioral_Patterns/Iterator)

set(flyweight_SRCS
    Character.cpp
    Font.cpp
    Glyph.cpp
    GlyphContext.cpp
    GlyphFactory.cpp)

add_executable(flyweight1 flyweight1.cpp)
add_library(flyweight SHARED ${flyweight_SRCS})
target_link_libraries(flyweight1 flyweight)
