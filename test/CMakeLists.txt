message("--> Traversing Directory: test")

find_package(GTest REQUIRED)

add_executable(LinkedListTest
    LinkedListTest.cpp
)

target_link_libraries(LinkedListTest
    GTest::GTest
    GTest::Main
    LinkedListLibrary
)

enable_testing()
add_test(LinkedListTest ${CMAKE_BINARY_DIR}/test/LinkedListTest)
