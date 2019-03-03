cmake_minimum_required (VERSION 2.8.2)

configure_file(CMakeLists.txt.in 3rd-download/CMakeLists.txt)


execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/3rd-download )
if(result)
  message(FATAL_ERROR "CMake step for third party failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/3rd-download )
if(result)
  message(FATAL_ERROR "Build step for third party failed: ${result}")
endif()

set(uthash_DIR "${CMAKE_CURRENT_BINARY_DIR}/uthash-src/src")
#aux_source_directory(${uthash_DIR} uthash_SRCS)
#add_library(uthash ${uthash_SRCS})
#target_include_directories(uthash PUBLIC ${uthash_DIR})

set(pbc_DIR "${CMAKE_CURRENT_BINARY_DIR}/protobuf-c-src/protobuf-c")
aux_source_directory(${pbc_DIR} pbc_SRCS)
add_library(protobuf-c ${pbc_SRCS})
target_include_directories(protobuf-c PUBLIC ${pbc_DIR} ${uthash_DIR})

