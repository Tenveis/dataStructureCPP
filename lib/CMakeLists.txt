message("--> Traversing Directory: lib")

set(INCLUDE_FILES 
${CMAKE_CURRENT_SOURCE_DIR}/include
)


add_library(LinkedListLibrary
    src/linked_list.cpp
)
target_include_directories(
    LinkedListLibrary
    PUBLIC ${INCLUDE_FILES}
)

add_library(DoubleLinkedListLibrary
    src/double_linked_list.cpp
)
target_include_directories(
    DoubleLinkedListLibrary
    PUBLIC ${INCLUDE_FILES}
)
add_library(StackLibrary
    src/stack.cpp
)
target_include_directories(
    StackLibrary
    PUBLIC ${INCLUDE_FILES}
)

add_library(LinkedList::LinkedListLibrary ALIAS LinkedListLibrary)
add_library(DoubleLinkedList::DoubleLinkedListLibrary ALIAS DoubleLinkedListLibrary)
add_library(Stack::StackLibrary ALIAS StackLibrary)
