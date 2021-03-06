cmake_minimum_required(VERSION 3.10.0)


if ($ENV{TRAVIS_BUILD_NUMBER})
    set(BUILD_NUMBER $ENV{TRAVIS_BUILD_NUMBER})
else()
    set(BUILD_NUMBER 0)
endif()


project(lesson-1 VERSION 0.1.${BUILD_NUMBER})

include(CTest)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(lib/googletest)


set(CPACK_GENERATOR DEB)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS ON)
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "podlog2@gmail.com")
include(CPack)

enable_testing()
