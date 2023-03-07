#include "SinglyLinkedList.h"

bool SinglyLinkedList::add(ItemType item) {
    list.push_front(item);
    return true;
}

bool SinglyLinkedList::add(int index, ItemType item) {
    if (index < 0 || index >= getLength())
        return false;

    auto it = list.before_begin();
    for (int i = 0; i < index; i++)
        ++it;

    list.insert_after(it, item);
    return true;
}

void SinglyLinkedList::remove(int index) {
    if (index < 0 || index >= getLength())
        return;

    auto it = list.before_begin();
    for (int i = 0; i < index; i++)
        ++it;

    list.erase_after(it);
}

ItemType SinglyLinkedList::get(int index) {
    if (index < 0 || index >= getLength())
        throw out_of_range("Index out of range");

    auto it = list.begin();
    for (int i = 0; i < index; i++)
        ++it;

    return *it;
}

bool SinglyLinkedList::isEmpty() {
    return list.empty();
}

int SinglyLinkedList::getLength() {
    int count = 0;
    for (auto it = list.begin(); it != list.end(); ++it)
        count++;

    return count;
}

void SinglyLinkedList::print() {
    for (auto it = list.begin(); it != list.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

int singly_linked_list_main() {
    SinglyLinkedList list;

    // add elements
    list.add("1");
    list.add("2");
    list.add("3");
    list.add("4");
    list.add("5");

    // print the list
    list.print();

    // insert an element at index 2
    list.add(2, "6");

    // print the list again
    list.print();

    // remove an element at index 4
    list.remove(4);

    // print the list again
    list.print();

    // get the element at index 3 and print it
    cout << list.get(3) << endl;

    // print the length of the list
    cout << list.getLength() << endl;

    // check if the list is empty
    cout << boolalpha << list.isEmpty() << endl;

    return 0;
}