#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue() {
    frontIndex = 0;
    backIndex = -1;
    count = 0;
}

Queue::~Queue() {
    // nothing to deallocate since we're using a static array
}

bool Queue::enqueue(int item) {
    if (count >= MAX_SIZE) {
        return false; // queue is full
    }
    backIndex++;
    items[backIndex] = item;
    count++;
    return true;
}

bool Queue::dequeue() {
    if (count == 0) {
        return false; // queue is empty
    }
    frontIndex++;
    count--;
    return true;
}

bool Queue::dequeue(int& item) {
    if (count == 0) {
        return false; // queue is empty
    }
    item = items[frontIndex];
    frontIndex++;
    count--;
    return true;
}

void Queue::getFront(int& item) {
    if (count == 0) {
        throw "Queue is empty";
    }
    item = items[frontIndex];
}

bool Queue::isEmpty() {
    return count == 0;
}

void Queue::displayItems() {
    if (count == 0) {
        cout << "Queue is empty" << endl;
        return;
    }
    for (int i = frontIndex; i <= backIndex; i++) {
        cout << items[i] << " ";
    }
    cout << endl;
}

int queue_main() {
    Queue q;

    cout << "Enqueue 1, 2, 3: ";
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.displayItems();

    cout << "Dequeue: ";
    q.dequeue();
    q.displayItems();

    cout << "Dequeue and retrieve: ";
    int item;
    q.dequeue(item);
    cout << item << endl;
    q.displayItems();

    cout << "Enqueue 4, 5, 6: ";
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.displayItems();

    cout << "Front of queue: ";
    q.getFront(item);
    cout << item << endl;

    cout << "Is queue empty? " << q.isEmpty() << endl;

    cout << "Dequeue all: ";
    while (!q.isEmpty()) {
        q.dequeue();
        q.displayItems();
    }

    cout << "Is queue empty? " << q.isEmpty() << endl;

    return 0;
}