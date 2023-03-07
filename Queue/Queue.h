#ifndef QUEUE_H
#define QUEUE_H

const int MAX_SIZE = 100;

class Queue {
private:
    int items[MAX_SIZE];
    int frontIndex;
    int backIndex;
    int count;

public:
    Queue();
    ~Queue();
    bool enqueue(int item);
    bool dequeue();
    bool dequeue(int& item);
    void getFront(int& item);
    bool isEmpty();
    void displayItems();
};

int queue_main();

#endif