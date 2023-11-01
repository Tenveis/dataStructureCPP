cmake_minimum_required(VERSION 3.10)

project(dataStructureCPP VERSION 0.1.0)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


option(BUILD_TESTS "set to build unit test." ON)

if (BUILD_TESTS)
    message("BUILD_TESTS = ON, unit test will be built.")
else ()
    message("BUILD_TESTS = OFF, unit test will not be built.")
endif ()


add_subdirectory(lib)

if(BUILD_TESTS)
    add_subdirectory(test)
endif()