#include "DoublyLinkedList.h"

bool DoublyLinkedList::add(int data) {
    Node* node = new Node(data);
    nodeList.push_back(node);
    return true;
}

bool DoublyLinkedList::add(int index, int data) {
    if (index < 0 || index > nodeList.size()) {
        return false;
    }
    auto iter = nodeList.begin();
    advance(iter, index);
    Node* node = new Node(data);
    nodeList.insert(iter, node);
    return true;
}

void DoublyLinkedList::remove(int index) {
    if (index < 0 || index >= nodeList.size()) {
        return;
    }
    auto iter = nodeList.begin();
    advance(iter, index);
    delete* iter;
    nodeList.erase(iter);
}

int DoublyLinkedList::get(int index) {
    if (index < 0 || index >= nodeList.size()) {
        return -1; // or throw an exception
    }
    auto iter = nodeList.begin();
    advance(iter, index);
    return (*iter)->data;
}

bool DoublyLinkedList::isEmpty() {
    return nodeList.empty();
}

int DoublyLinkedList::getLength() {
    return nodeList.size();
}

void DoublyLinkedList::print() {
    for (auto& node : nodeList) {
        cout << node->data << " ";
    }
    cout << endl;
}

void DoublyLinkedList::printReverse() {
    for (auto iter = nodeList.rbegin(); iter != nodeList.rend(); ++iter) {
        cout << (*iter)->data << " ";
    }
    cout << endl;
}

int doubly_linked_list_main() {
    DoublyLinkedList list;

    // add some elements to the list
    list.add(1);
    list.add(2);
    list.add(3);

    // print the list
    cout << "List contents: ";
    list.print(); // prints "List contents: 1 2 3"

    // add an element at index 1
    list.add(1, 4);

    // print the list again
    cout << "List contents: ";
    list.print(); // prints "List contents: 1 4 2 3"

    // remove an element
    list.remove(2);

    // print the list again
    cout << "List contents: ";
    list.print(); // prints "List contents: 1 4 3"

    // print the list in reverse order
    cout << "List contents (reverse): ";
    list.printReverse(); // prints "List contents (reverse): 3 4 1"

    return 0;
}