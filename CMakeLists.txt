cmake_minimum_required(VERSION 3.10.0)
project(lesson_1 VERSION 0.1.0)

include(CTest)


include_directories(src)
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(lib/googletest)

install(TARGETS lesson_1 RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS ON)
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "podlog2@gmail.com")
include(CPack)

enable_testing()
