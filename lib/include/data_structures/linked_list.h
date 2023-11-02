/**
 * @file linked_list.h
 * @author vaibhav
 * @brief This file contains the declarations for the Node class and the LinkedList class.
 * @version 0.1
 * @date 2023-10-31
 *
 *
 */

#ifndef INCLUDE_LINKED_LIST_H
#define INCLUDE_LINKED_LIST_H
#pragma once

#include <iostream>
#include <limits.h>

using namespace std;

/**
 * @class Node
 * @brief A node representing an element in a linked list.
 */
class Node
{
public:
    /**
     * @brief Constructor for the Node class.
     * @param value The value to be stored in the node.
     */
    Node(int value);

    int value;  ///< The value stored in the node.
    Node *next; ///< Pointer to the next node in the list.
};

/**
 * @class LinkedList
 * @brief A class representing a singly-linked list.
 */
class LinkedList
{
public:
    /**
     * @brief Default constructor for the LinkedList class.
     */
    LinkedList();

    /**
     * @brief Constructor for the LinkedList class with an initial value.
     * @param value The initial value for the list.
     */
    LinkedList(int value);

    /**
     * @brief Destructor for the LinkedList class.
     */
    ~LinkedList();

private:
    Node *head; ///< Pointer to the first node in the list.
    Node *tail; ///< Pointer to the last node in the list.
    int length; ///< The number of elements in the list.

public:
    /**
     * @brief Print the elements of the linked list.
     */
    void printList();

    /**
     * @brief Get the value of the first element (head) in the linked list.
     * @return The value of the head element.
     */
    int getHead();

    /**
     * @brief Get the value of the last element (tail) in the linked list.
     * @return The value of the tail element.
     */
    int getTail();

    /**
     * @brief Get the length (number of elements) of the linked list.
     * @return The length of the linked list.
     */
    int getLength();

    /**
     * @brief Append a new element with the given value to the end of the linked list.
     * @param value The value to be added to the end of the list.
     */
    void append(int value);

    /**
     * @brief Delete the last element in the linked list.
     * @return The value of the deleted last element.
     */
    int deleteLast();

    /**
     * @brief Prepend a new element with the given value to the beginning of the linked list.
     * @param value The value to be added to the beginning of the list.
     */
    void prepend(int value);

    /**
     * @brief Delete the first element in the linked list.
     * @return The value of the deleted first element.
     */
    int deleteFirst();

    /**
     * @brief Get the element at the specified index in the linked list.
     * @param index The index of the element to retrieve.
     * @return A pointer to the node at the specified index, or nullptr if the index is out of bounds.
     */
    Node *get(int index);

    /**
     * @brief Set the value of the element at the specified index in the linked list.
     * @param index The index of the element to set.
     * @param value The new value to set for the element.
     * @return true if the element at the specified index was successfully updated, false otherwise.
     */
    bool set(int index, int value);

    /**
     * @brief Insert a new element with the given value at the specified index in the linked list.
     * @param index The index at which to insert the new element.
     * @param value The value to be inserted.
     * @return true if the insertion was successful, false if the index is out of bounds.
     */
    bool insert(int index, int value);

    /**
     * @brief Delete the element at the specified index in the linked list.
     * @param index The index of the element to delete.
     */
    int deleteNode(int index);


    /**
     * @brief Reverse the order of the LinkedList.
     */
    void reverse();

    /**
     * @brief Clear the linked list, deallocating memory and setting it to an empty state.
     */
    void clear();
};

#endif 
