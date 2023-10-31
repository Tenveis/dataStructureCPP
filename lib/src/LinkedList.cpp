#include "LinkedList/LinkedList.h"

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
    Node *newNode = new Node(value);

    head = newNode;
    tail = newNode;
    length = 1;
}

LinkedList::~LinkedList()
{
    clear();
}

void LinkedList::clear()
{
    Node *temp = head;
    while (head)
    {
        head = head->next;
        delete temp;
        temp = head;
    }
    length = 0;
}
