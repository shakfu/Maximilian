
get_filename_component(PARENT ${CMAKE_CURRENT_SOURCE_DIR} NAME)

MESSAGE(STATUS "building " ${PARENT})

add_executable(${PARENT}
    dsp.cpp
    ${SRC}/player.cpp
    ${SRC}/RtAudio.cpp
    ${INCLUDE}/maximilian.cpp)

target_compile_options(${PARENT} PUBLIC -Wall)

target_link_libraries(${PARENT} PUBLIC -lpthread)

target_link_libraries(${PARENT} PUBLIC -lasound)

add_definitions(-D__LINUX_ALSA__)
