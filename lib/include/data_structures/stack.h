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
     * Clears the stack, removing all elements.
     */
    void clear();
};

#endif
