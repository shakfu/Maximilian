cmake_minimum_required (VERSION 3.15)

project (maximilian)

set(CMAKE_CXX_STANDARD 17)

# key variables
set(INCLUDE ${CMAKE_SOURCE_DIR}/include/maximilian)
set(INCLUDE_LIBS ${CMAKE_SOURCE_DIR}/include/maximilian/libs)
set(SRC ${CMAKE_SOURCE_DIR}/src)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#MESSAGE("CMAKE_SOURCE_DIR:" ${CMAKE_SOURCE_DIR})

include_directories(${INCLUDE})
include_directories(${INCLUDE_LIBS})

add_subdirectory(examples/sine)
add_subdirectory(examples/fm1)
add_subdirectory(examples/fm2)
add_subdirectory(examples/am1)
add_subdirectory(examples/am2)

