cmake_minimum_required(VERSION 3.10)

project(dataStructureCPP VERSION 0.1.0)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

message("--> Traversing Directory: dataStructureCPP")


option(BUILD_TESTS "set to build unit test." ON)
option(BUILD_EXAMPLES "set to build examples" ON)

if (BUILD_TESTS)
    message("--> BUILD_TESTS = ON, unit test will be built.")
else ()
    message("--> BUILD_TESTS = OFF, unit test will not be built.")
endif ()

if (BUILD_EXAMPLES)
    message("--> BUILD_EXAMPLES = ON, examples will be built.")
else ()
    message("--> BUILD_EXAMPLES = OFF, examples will not be built.")
endif ()


add_subdirectory(lib)

if(BUILD_TESTS)
    add_subdirectory(test)
endif()

if(BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()