
get_filename_component(PARENT ${CMAKE_CURRENT_SOURCE_DIR} NAME)

#MESSAGE("SUB CMAKE_SOURCE_DIR:" ${CMAKE_SOURCE_DIR})
#MESSAGE("CURRENT: " ${CMAKE_CURRENT_SOURCE_DIR})
#MESSAGE("PARENT: " ${PARENT})
#MESSAGE("INCLUDE: " ${INCLUDE})
#MESSAGE("INCLUDE_LIBS: " ${INCLUDE_LIBS})


add_executable(${PARENT}
    dsp.cpp
    ${SRC}/player.cpp
    ${SRC}/RtAudio.cpp
    ${INCLUDE}/maximilian.cpp)

target_compile_options(${PARENT} PUBLIC -Wall)

target_link_libraries(${PARENT} PUBLIC -lpthread)

MESSAGE(STATUS "Linux build")

target_link_libraries(${PARENT} PUBLIC -lasound)

add_definitions(-D__LINUX_ALSA__)
