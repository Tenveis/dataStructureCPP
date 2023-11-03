/**
 * @file queue.h
 * @author vaibhav
 * @brief This file defines a simple queue data structure.
 * @version 0.1
 * @date 2023-11-02
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef INCLUDE_QUEUE_H
#define INCLUDE_QUEUE_H
#pragma once

#include <iostream>
#include <limits.h>

using namespace std;

/**
 * @class Node
 * @brief A class representing a node in the queue.
 *
 */
class Node
{
public:
    /**
     * Constructor for Node class.
     * @param value The integer value to be stored in the node.
     */
    Node(int value);

    int value;  ///< The integer value stored in the node.
    Node *next; ///< A pointer to the next node in the queue.
};

/**
 * @class Queue
 * @brief A class representing a queue data structure.
 *
 */
class Queue
{
public:
    /**
     * Default constructor for the Queue class.
     */
    Queue();

    /**
     * Constructor for the Queue class with an initial value.
     * @param value The initial integer value to enqueue in the queue.
     */
    Queue(int value);

    /**
     * Destructor for the Queue class.
     */
    ~Queue();

private:
    Node *first; ///< A pointer to the first node in the queue.
    Node *last;  ///< A pointer to the last node in the queue.
    int length;  ///< The current length of the queue.

public:
    /**
     * Print the contents of the queue.
     */
    void printQueue();

    /**
     * Get the value of the first element in the queue.
     * @return The value of the first element.
     */
    int getFirst();

    /**
     * Get the value of the last element in the queue.
     * @return The value of the last element.
     */
    int getLast();

    /**
     * Get the current length of the queue.
     * @return The number of elements in the queue.
     */
    int getLength();

    /**
     * Clear the queue by removing all elements.
     */
    void clear();
};

#endif
