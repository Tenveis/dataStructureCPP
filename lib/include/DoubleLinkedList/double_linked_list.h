/**
 * @file double_linked_list.h
 * @author vaibhav
 * @brief This header file defines a double-linked list data structure and its operations.
 * @version 0.1
 * @date 2023-11-01
 */

#ifndef INCLUDE_DOUBLE_LINKED_LIST_H
#define INCLUDE_DOUBLE_LINKED_LIST_H
#pragma once

#include <iostream>
#include <limits.h>

using namespace std;

/**
 * @class Node
 * @brief A class representing a node in a double-linked list.
 */
class Node
{
public:
    /**
     * @brief Constructor for the Node class.
     * @param value The integer value to store in the node.
     */
    Node(int value);

    int value;  ///< The integer value stored in the node.
    Node *next; ///< Pointer to the next node in the list.
    Node *prev; ///< Pointer to the previous node in the list.
};

/**
 * @class DoubleLinkedList
 * @brief A class representing a double-linked list.
 */
class DoubleLinkedList
{
public:
    /**
     * @brief Default constructor for the DoubleLinkedList class.
     */
    DoubleLinkedList();

    /**
     * @brief Constructor for the DoubleLinkedList class with an initial value.
     * @param value The initial value for the list's first node.
     */
    DoubleLinkedList(int value);

    /**
     * @brief Destructor for the DoubleLinkedList class.
     */
    ~DoubleLinkedList();

private:
    Node *head; ///< Pointer to the first node in the list.
    Node *tail; ///< Pointer to the last node in the list.
    int length; ///< The current length of the list.

public:
    /**
     * @brief Print the elements of the double-linked list.
     */
    void printList();

    /**
     * @brief Print the elements of the double-linked list in reverse order.
     */
    void printReverse();

    /**
     * @brief Get the value of the head (first element) of the list.
     * @return The value of the head node.
     */
    int getHead();

    /**
     * @brief Get the value of the tail (last element) of the list.
     * @return The value of the tail node.
     */
    int getTail();

    /**
     * @brief Get the current length of the double-linked list.
     * @return The length of the list.
     */
    int getLength();

    /**
     * @brief Append a new node with the specified value to the end of the list.
     * @param value The value to be appended.
     */
    void append(int value);

    /**
     * @brief Prepend a new node with the specified value to the beginning of the list.
     * @param value The value to be prepended.
     */
    void prepend(int value);

    /**
     * @brief Delete the first node in the list and return its value.
     * @return The value of the deleted node.
     */
    int deleteFirst();

    /**
     * @brief Delete the last node in the list and return its value.
     * @return The value of the deleted node.
     */
    int deleteLast();

    /**
     * @brief Get the node at the specified index.
     * @param index The index of the node to retrieve.
     * @return A pointer to the node at the given index.
     */
    Node *get(int index);

    /**
     * @brief Set the value of the node at the specified index.
     * @param index The index of the node to set.
     * @param value The new value for the node.
     * @return True if the operation is successful, false if the index is out of bounds.
     */
    bool set(int index, int value);

    /**
     * @brief Insert a new node with the specified value at the given index.
     * @param index The index at which to insert the new node.
     * @param value The value to be inserted.
     * @return True if the operation is successful, false if the index is out of bounds.
     */
    bool insert(int index, int value);

    /**
     * @brief Delete the node at the specified index and return its value.
     * @param index The index of the node to delete.
     * @return The value of the deleted node, or INT_MIN if the index is out of bounds.
     */
    int deleteNode(int index);

    /**
     * @brief Remove the first occurance of the given value.
     * @param value The value to be removed.
     */
    void remove(int value);

    /**
     * @brief Remove all occurances of the given value.
     * @param value The value to be removed.
     */
    void removeAll(int value);

    /**
     * @brief Reverse the order of nodes in the double-linked list.
     */
    void reverse();

    /**
     * @brief Clear the double-linked list, removing all nodes.
     */
    void clear();
};

#endif
