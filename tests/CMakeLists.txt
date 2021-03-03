add_executable(tests main.cpp)

add_test(test_version tests)
target_link_libraries(tests version_lib gtest)