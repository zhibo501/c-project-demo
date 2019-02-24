cmake_minimum_required (VERSION 2.8.2)

include_directories ("${PROJECT_SOURCE_DIR}/src")

add_executable(demo main.c)
target_link_libraries(demo demoLib)

#set(CMAKE_INSTALL_PREFIX /usr/local)
install (TARGETS demo DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/config.h"
         DESTINATION include)

