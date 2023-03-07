#ifndef PIOI_WORKSHOP_DOUBLYLINKEDLIST_H
#define PIOI_WORKSHOP_DOUBLYLINKEDLIST_H

#include <iostream>
#include <list>

using namespace std;

// Node class for a doubly linked list
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
};

// Doubly linked list class
class DoublyLinkedList {
public:
    list<Node*> nodeList;

    bool add(int data);
    bool add(int index, int data);
    void remove(int index);
    int get(int index);
    bool isEmpty();
    int getLength();
    void print();
    void printReverse();
};

int doubly_linked_list_main();

#endif
