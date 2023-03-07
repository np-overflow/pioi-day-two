#include "Stack.h"

//Default constructor
Stack::Stack() {
    capacity = 10; // default capacity
    size = 0;
    top = -1;
    items = new StackItemType[capacity];
};

//Destructor
Stack::~Stack() {
    delete[] items;
};

//check if the stack is empty
bool Stack::isEmpty() {
    return top == -1;
};

//push item on top of the stack
bool Stack::push(StackItemType item) {
    if (size == capacity) {
        // stack is full, resize the array
        StackItemType* newItems = new StackItemType[capacity * 2];
        for (int i = 0; i < size; i++) {
            newItems[i] = items[i];
        }
        delete[] items;
        items = newItems;
        capacity *= 2;
    }

    top++;
    items[top] = item;
    size++;
    return true;
};

//pop item from top of stack
bool Stack::pop() {
    if (!isEmpty()) {
        top--;
        size--;
        return true;
    }
    return false;
};

//retrieve and pop item from top of stack
bool Stack::pop(StackItemType& item) {
    if (!isEmpty()) {
        item = items[top];
        pop();
        return true;
    }
    return false;
};

//retrieve item from top of stack
void Stack::getTop(StackItemType& item) {
    if (!isEmpty()) {
        item = items[top];
    }
    else {
        cout << "Empty Stack!" << " ";
    }
};

//display items in stack in order
void Stack::displayInOrder() {
    if (!isEmpty()) {
        for (int i = top; i >= 0; i--) {
            cout << items[i];
            if (i != 0) {
                cout << ", ";
            }
        }
        cout << endl;
    }
};

//display items in stack in order of insertion
void Stack::displayInOrderOfInsertion() {
    if (!isEmpty()) {
        Stack st;
        for (int i = top; i >= 0; i--) {
            st.push(items[i]);
        }

        st.displayInOrder();
        cout << endl;
    }
};

int stack_main() {
    // Create a new stack
    Stack myStack;

    // Push some items onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Display the items in the stack
    cout << "Items in stack: ";
    myStack.displayInOrder();

    // Retrieve the item at the top of the stack
    int topItem;
    myStack.getTop(topItem);
    cout << "Top item: " << topItem << endl;

    // Pop the item at the top of the stack and display it
    myStack.pop();
    cout << "Items in stack after popping top item: ";
    myStack.displayInOrder();

    // Pop all items off the stack and display them
    int poppedItem;
    while (myStack.pop(poppedItem)) {
        cout << "Popped item: " << poppedItem << endl;
    }

    // Check if the stack is empty
    if (myStack.isEmpty()) {
        cout << "Stack is empty." << endl;
    }
    else {
        cout << "Stack is not empty." << endl;
    }
    return 0;
}