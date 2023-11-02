/**
 * @file stack.cpp
 * @author vaibhav
 * @brief
 * @version 0.1
 * @date 2023-11-02
 *
 *
 */

#include "data_structures/stack.h"

Node::Node(int value)
{
    this->value = value;
    next = nullptr;
}

Stack::Stack()
{
    top = nullptr;
    height = 0;
}

Stack::Stack(int value)
{
    top = new Node(value);
    height = 1;
}

Stack::~Stack()
{
    clear();
}

void Stack::clear()
{
    Node *current = top;
    while (top)
    {
        top = top->next;
        delete current;
        current = top;
    }
    height = 0;
}