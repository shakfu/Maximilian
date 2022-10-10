cmake_minimum_required (VERSION 3.15)

project (maximilian)

set(CMAKE_CXX_STANDARD 17)

# key variables
set(INCLUDE ${CMAKE_SOURCE_DIR}/include/maximilian)
set(INCLUDE_LIBS ${CMAKE_SOURCE_DIR}/include/maximilian/libs)
set(SRC ${CMAKE_SOURCE_DIR}/src)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


include_directories(${INCLUDE})
include_directories(${INCLUDE_LIBS})

add_subdirectory(examples/advance_filters)
add_subdirectory(examples/am1)
add_subdirectory(examples/am2)
add_subdirectory(examples/compressor)
add_subdirectory(examples/counting1)
add_subdirectory(examples/counting2)
add_subdirectory(examples/counting3)
add_subdirectory(examples/counting4)
add_subdirectory(examples/drummachine)
add_subdirectory(examples/envelopes)
add_subdirectory(examples/enveloping2)
add_subdirectory(examples/fft_example)
add_subdirectory(examples/filters)
add_subdirectory(examples/fm1)
add_subdirectory(examples/fm2)
add_subdirectory(examples/mixing)
add_subdirectory(examples/monosynth)
add_subdirectory(examples/polysynth)
add_subdirectory(examples/recording)
add_subdirectory(examples/replicant)
add_subdirectory(examples/sampleplayer)
add_subdirectory(examples/sine)
add_subdirectory(examples/twotones)

