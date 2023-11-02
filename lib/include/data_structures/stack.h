/**
 * @file stack.h
 * @author vaibhav
 * @brief This file defines the Stack class and its related components.
 * @version 0.1
 * @date 2023-11-02
 */

#ifndef INCLUDE_STACK_H
#define INCLUDE_STACK_H
#pragma once

#include <iostream>
#include <limits.h>

using namespace std;

/**
 * @class Node
 * @brief A class representing a node in a stack.
 */
class Node
{
public:
    /**
     * Constructor for Node class.
     * @param value The value to be stored in the node.
     */
    Node(int value);

    int value;  ///< The value stored in the node.
    Node *next; ///< Pointer to the next node.
};

/**
 * @class Stack
 * @brief A class representing a stack data structure.
 */
class Stack
{
public:
    /**
     * Default constructor for the Stack class.
     */
    Stack();

    /**
     * Constructor for the Stack class with an initial value.
     * @param value The initial value for the stack.
     */
    Stack(int value);

    /**
     * Destructor for the Stack class.
     */
    ~Stack();

private:
    Node *top;  ///< Pointer to the top node of the stack.
    int height; ///< The current height of the stack.

public:
    /**
     * @brief Print the elements of the stack.
     */
    void printStack();

    /**
     * @brief Get the top element of the stack without removing it.
     * @return The top element of the stack.
     */
    int getTop();

    /**
     * @brief Get the height (number of elements) of the stack.
     * @return The number of elements in the stack.
     */
    int getHeight();

    /**
     * @brief Check if the stack is empty.
     * @return `true` if the stack is empty, `false` otherwise.
     */
    bool is_empty();

    /**
     * @brief Push an element onto the stack.
     * @param value The element to be pushed onto the stack.
     */
    void push(int value);

    /**
     * @brief Pop and return the top element from the stack.
     * @return The top element that was removed from the stack.
     */
    int pop();

    /**
     * Clears the stack, removing all elements.
     */
    void clear();
};

#endif
