/**
 * @file linked_list.cpp
 * @author vaibhav
 * @brief Source file for LinkedList library.
 * @version 0.1
 * @date 2023-11-01
 *
 *
 */
#include "LinkedList/linked_list.h"

Node::Node(int value)
{
    this->value = value;
    Node *next = nullptr;
}

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
    length = 0;
}

LinkedList::LinkedList(int value)
{
    head = new Node(value);
    tail = head;
    length = 1;
}

LinkedList::~LinkedList()
{
    clear();
}

void LinkedList::printList()
{
    Node *current = head;
    while (current->next)
    {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << current->value << endl;
}

int LinkedList::getHead()
{
    if (head)
    {
        return head->value;
    }
    cerr << "The LinkedList is empty.";
    return INT_MIN;
}

int LinkedList::getTail()
{
    if (tail)
    {
        return tail->value;
    }
    cout << "The LinkedList is empty.";
    return INT_MIN;
}

int LinkedList::getLength()
{
    return length;
}

void LinkedList::append(int value)
{
    Node *newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        tail->next = newNode;
    }
    tail = newNode;
    length++;
}

int LinkedList::deleteLast()
{

    if (length == 0)
    {
        cerr << "LinkedList is Empty." << endl;
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
        Node *prev = head;
        while (prev->next != tail)
        {
            prev = prev->next;
        }
        prev->next = nullptr;
    }
    int nodeValue = current->value;
    delete current;
    length--;
    return nodeValue;
}

void LinkedList::prepend(int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;

    if (length == 0)
    {
        tail = newNode;
    }
    length++;
}

int LinkedList::deleteFirst()
{
    if (length == 0)
    {
        cerr << "LinkedList is Empty." << endl;
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
    }
    int firstValue = current->value;
    delete current;
    length--;
    return firstValue;
}

Node *LinkedList::get(int index)
{
    if ((index < 0) || (length <= index))
        return nullptr;

    Node *current = head;
    for (int i = 0; i < index; i++)
    {
        current = current->next;
    }
    return current;
}

bool LinkedList::set(int index, int value)
{
    Node *current = get(index);
    if (current)
    {
        current->value = value;
        return true;
    }
    return false;
}

bool LinkedList::insert(int index, int value)
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
    prev->next = newNode;
    length++;
    return true;
}

int LinkedList::deleteNode(int index)
{
    if ((index < 0) || (length <= index))
    {
        cerr << "LinkedList is Empty." << endl;
        return INT_MIN;
    }

    if (index == 0)
        return deleteFirst();
    if (index == length - 1)
        return deleteLast();

    Node *before = get(index - 1);
    Node *current = before->next;

    int nodeValue = current->value;
    before->next = current->next;
    delete current;
    length--;
    return nodeValue;
}

void LinkedList::reverse()
{
    Node *current = head;

    head = tail;
    tail = current;
    Node *before = nullptr;
    Node *after = nullptr;

    for (int i = 0; i < length; i++)
    {
        after = current->next;
        current->next = before;
        before = current;
        current = after;
    }
}

void LinkedList::clear()
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
