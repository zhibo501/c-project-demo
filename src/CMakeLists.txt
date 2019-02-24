cmake_minimum_required (VERSION 2.8.2)

aux_source_directory(. DIR_LIB_SRCS)
add_library(demoLib ${DIR_LIB_SRCS})

install (TARGETS demoLib DESTINATION bin)
install (FILES demo.h DESTINATION include)

