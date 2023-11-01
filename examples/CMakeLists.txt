message("--> Traversing Directory: examples")

add_executable(ll_append LinkedList/ex_append.cpp)
target_link_libraries(ll_append LinkedListLibrary)