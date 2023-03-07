#ifndef PIOI_WORKSHOP_SINGLYLINKEDLIST_H
#define PIOI_WORKSHOP_SINGLYLINKEDLIST_H

#include <forward_list>
#include <iostream>
#include <string>
using namespace std;

typedef string ItemType;

class SinglyLinkedList {
private:
    forward_list<ItemType> list;

public:
    bool add(ItemType item);
    bool add(int index, ItemType item);
    void remove(int index);
    ItemType get(int index);
    bool isEmpty();
    int getLength();
    void print();
};

int singly_linked_list_main();

#endif