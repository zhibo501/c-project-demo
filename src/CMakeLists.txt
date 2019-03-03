cmake_minimum_required (VERSION 2.8.2)

aux_source_directory(. demo_LIB_SRCS)
aux_source_directory(mod1 demo_LIB_SRCS)
aux_source_directory(mod2 demo_LIB_SRCS)

#add_library(demo ${demo_LIB_SRCS})
add_library(demo SHARED ${demo_LIB_SRCS})
target_link_libraries(demo protobuf-c)
target_include_directories(demo PUBLIC include)

#include_directories(mod1 mod2)
include_directories(BEFORE mod1 mod2)

install (TARGETS demo DESTINATION lib)
install (FILES demo.h DESTINATION include)

