/**
 * @file ex_append.cpp
 * @author vaibhav 
 * @brief 
 * @version 0.1
 * @date 2023-11-01
 * 
 * 
 */

#include "data_structures/linked_list.h"


int main(int argc, char const *argv[])
{
    LinkedList empty_list;

    empty_list.append(12);
    empty_list.append(1);
    empty_list.append(34);
    empty_list.printList();
    return 0;
}
