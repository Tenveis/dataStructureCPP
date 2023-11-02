/**
 * @file double_linked_list.cpp
 * @author vaibhav
 * @brief Implementation of the Node class and DoubleLinkedList class methods.
 * @version 0.1
 * @date 2023-11-01
 *
 *
 */

#include "data_structures/double_linked_list.h"

Node::Node(int value)
{
    this->value = value;
    next = nullptr;
    prev = nullptr;
}

DoubleLinkedList::DoubleLinkedList()
{
    head = nullptr;
    tail = nullptr;
    length = 0;
}

DoubleLinkedList::DoubleLinkedList(int value)
{
    head = new Node(value);
    tail = head;
    length = 1;
}

DoubleLinkedList::~DoubleLinkedList()
{
    clear();
}

void DoubleLinkedList::printList()
{
    Node *current = head;
    while (current->next)
    {
        cout << current->value << " <--> ";
        current = current->next;
    }
    cout << current->value << endl;
}

void DoubleLinkedList::printReverse()
{
    Node *current = tail;
    while (current->prev)
    {
        cout << current->value << " <--> ";
        current = current->prev;
    }
    cout << current->value << endl;
}

int DoubleLinkedList::getHead()
{
    if (head)
    {
        return head->value;
    }
    cerr << "The double-linked list is Empty.";
    return INT_MIN;
}

int DoubleLinkedList::getTail()
{
    if (tail)
    {
        return tail->value;
    }
    cerr << "The double-linked list is Empty.";
    return INT_MIN;
}

int DoubleLinkedList::getLength()
{
    return length;
}

void DoubleLinkedList::append(int value)
{
    Node *newNode = new Node(value);

    if (!head)
        head = newNode;
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
    }

    tail = newNode;
    length++;
}

void DoubleLinkedList::prepend(int value)
{
    Node *newNode = new Node(value);

    if (!tail)
    {
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
    }
    head = newNode;
    length++;
}

int DoubleLinkedList::deleteFirst()
{
    if (length == 0)
    {
        cerr << "The double-linked list is Empty.";
        return INT_MIN;
    }
    Node *current = head;
    if (length == 1)
    {
        head = nullptr;
        tail = nullptr;
    }
    else
    {
        head = head->next;
        head->prev = nullptr;
    }

    int deleteValue = current->value;
    delete current;
    length--;
    return deleteValue;
}

int DoubleLinkedList::deleteLast()
{
    if (length == 0)
    {
        cerr << "The double-linked list is Empty.";
        return INT_MIN;
    }
    Node *current = tail;
    if (length == 1)
    {
        head = nullptr;
        tail = nullptr;
    }
    else
    {
        tail = tail->prev;
        tail->next = nullptr;
    }
    int deletedValue = current->value;
    delete current;
    length--;
    return deletedValue;
}

Node *DoubleLinkedList::get(int index)
{
    if ((index < 0) || (length <= index))
        return nullptr;

    Node *current = head;
    if (index / 2 < length)
    {
        for (int i = 0; i < index; i++)
        {
            current = current->next;
        }
    }
    else
    {
        current = tail;
        for (int i = length - 1; i > index; i--)
        {
            current = current->prev;
        }
    }
    return current;
}

bool DoubleLinkedList::set(int index, int value)
{
    Node *current = get(index);
    if (current)
    {
        current->value = value;
        return true;
    }
    return false;
}

bool DoubleLinkedList::insert(int index, int value)
{
    if ((index < 0) || (length < index))
        return false;

    if (index == 0)
    {
        prepend(value);
        return true;
    }
    if (index == length)
    {
        append(value);
        return true;
    }

    Node *newNode = new Node(value);
    Node *prev = get(index - 1);

    newNode->next = prev->next;
    newNode->prev = prev->next->prev;
    prev->next->prev = newNode;
    prev->next = newNode;

    length++;
    return true;
}

int DoubleLinkedList::deleteNode(int index)
{
    if (length == 0)
    {
        cerr << "The double-linked list is Empty.";
        return INT_MIN;
    }
    if (index == 0)
        return deleteFirst();
    if (index == length - 1)
        return deleteLast();

    Node *prev = get(index - 1);
    Node *current = prev->next;

    prev->next = current->next;
    current->next->prev = current->prev;

    int deletedValue = current->value;
    delete current;
    length--;
    return deletedValue;
}

/** The algorithm has flaws.*/
void DoubleLinkedList::remove(int value)
{
    Node *current = head;

    for (int i = 0; i < length; i++)
    {
        if (!current)
            break;
        if (current->value == value)
        {
            current = current->next;
            deleteNode(i);
            return;
        }
    }
}

/** The algorithm has flaws.*/
void DoubleLinkedList::removeAll(int value)
{
    Node *current = head;

    for (int i = 0; i < length; i++)
    {

        if (!current)
            break;

        if (current->value == value)
        {
            current = current->next;
            deleteNode(i);
        }
    }
}

void DoubleLinkedList::reverse()
{
    Node *current = head;

    head = tail;
    tail = current;

    Node *before = nullptr;
    Node *after = nullptr;

    for (int i = 0; i < length; i++)
    {
        after = current->next;
        current->next = current->prev;
        current->prev = after;
        before = current;
        current = after;
    }
}

void DoubleLinkedList::clear()
{
    Node *current = head;

    while (head)
    {
        head = head->next;
        delete current;
        current = head;
    }
    tail = nullptr;
    length = 0;
}
