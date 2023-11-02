/**
 * @file stack.cpp
 * @author vaibhav
 * @brief Implementation of Node class and Stack class.
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

void Stack::printStack()
{
    Node *current = top;
    while (current->next)
    {
        cout << current->value << " -> ";
    }
    cout << current->value << endl;
}

int Stack::getTop()
{
    if (top)
    {
        return top->value;
    }
    cout << "The Stack is empty." << endl;
    return INT_MIN;
}

int Stack::getHeight()
{
    return height;
}

bool Stack::is_empty()
{
    if (top)
        return false;
    return true;
}

void Stack::push(int value)
{
    Node *newNode = new Node(value);

    newNode->next = top;
    top = newNode;
    height++;
}

int Stack::pop()
{
    if (height == 0)
    {
        cout << "The Stack is empty." << endl;
        return INT_MIN;
    }
    Node *current = top;
    if (height == 1)
    {
        top = nullptr;
    }
    else
    {
        top = top->next;
    }
    int poppedValue = current->value;
    delete current;
    height--;
    return poppedValue;
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