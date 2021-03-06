cmake_minimum_required(VERSION 3.10.0)
set(BINARY ${CMAKE_PROJECT_NAME})

add_executable(tests main.cpp)

target_include_directories(tests PUBLIC ../src)
add_test(test_version tests)
target_link_libraries(tests version_lib gtest)
