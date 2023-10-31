/**
 * @file LinkedList.h
 * @author vaibhav
 * @brief This file contains the declarations for the Node class and the LinkedList class.
 * @version 0.1
 * @date 2023-10-31
 *
 *
 */

#ifndef INCLUDE_LINKEDLIST_H
#define INCLUDE_LINKEDLIST_H
#pragma once

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
     * @brief Clear the linked list, deallocating memory and setting it to an empty state.
     */
    void clear();
};

#endif // INCLUDE_LINKEDLIST_H
