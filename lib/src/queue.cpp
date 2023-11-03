/**
 * @file queue.cpp
 * @author vaibhav
 * @brief Implementation of a simple queue data structure.
 * @version 0.1
 * @date 2023-11-02
 *
 * @copyright Copyright (c) 2023
 */

#include "data_structures/queue.h"

Node::Node(int value)
{
    this->value = value;
    next = nullptr;
}

Queue::Queue()
{
    first = nullptr;
    last = nullptr;
    length = 0;
}

Queue::Queue(int value)
{
    first = new Node(value);
    last = first;
    length = 1;
}

Queue::~Queue()
{
    clear();
}

void Queue::printQueue()
{
    Node *current = first;
    while (current->next)
    {
        cout << current->value << " <- ";
        current = current->next;
    }
    cout << current->value << endl;
}

int Queue::getFirst()
{
    if (first)
    {
        return first->value;
    }
    cerr << "The Queue is empty." << endl;
    return INT_MIN;
}

int Queue::getLast()
{
    if (last)
    {
        return last->value;
    }
    cerr << "The Queue is empty." << endl;
    return INT_MIN;
}

int Queue::getLength()
{
    return length;
}

void Queue::clear()
{
    Node *current = first;

    while (first)
    {
        first = first->next;
        delete current;
        current = first;
    }
    last=nullptr;
    length = 0;
}
