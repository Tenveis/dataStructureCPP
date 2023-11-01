
set(INCLUDE_FILES 
${CMAKE_CURRENT_SOURCE_DIR}/include
)


add_library(LinkedListLibrary
    src/LinkedList.cpp
)
target_include_directories(
    LinkedListLibrary
    PUBLIC ${INCLUDE_FILES}
)

add_library(LinkedList::LinkedListLibrary ALIAS LinkedListLibrary)
