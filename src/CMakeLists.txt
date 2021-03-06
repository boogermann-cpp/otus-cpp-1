cmake_minimum_required(VERSION 3.10.0)

configure_file(build_number.h.in ${CMAKE_CURRENT_SOURCE_DIR}/build_number.h)
message("HEADER CONFIGURATION")

add_executable(lesson_1 main.cpp)
add_library(version_lib version.cpp)

target_link_libraries(lesson_1 version_lib)
