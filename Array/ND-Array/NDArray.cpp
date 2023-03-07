#include "NDArray.h"

NDArray::NDArray(int rows, int cols) {
    numRows = rows;
    numCols = cols;
    // Initializes the 2D vector with the specified number of rows and columns.
    items.resize(numRows, vector<int>(numCols));
}

bool NDArray::add(int row, int col, int item) {
    // Checks if the row and column indices are within bounds.
    if (row >= 0 && row < numRows && col >= 0 && col < numCols) {
        items[row][col] = item;
        return true;
    }
    return false;
}

bool NDArray::remove(int row, int col) {
    // Checks if the row and column indices are within bounds.
    if (row >= 0 && row < numRows && col >= 0 && col < numCols) {
        items[row][col] = 0;
        return true;
    }
    return false;
}

int NDArray::get(int row, int col) {
    // Checks if the row and column indices are within bounds.
    if (row >= 0 && row < numRows && col >= 0 && col < numCols) {
        return items[row][col];
    }
    return -1;
}

void NDArray::print() {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << items[i][j] << " ";
        }
        cout << endl;
    }
}

int NDArray::getNumRows() {
    return numRows;
}

int NDArray::getNumCols() {
    return numCols;
}

int NDArray_main() {
    // Create a List object with 3 rows and 4 columns
    NDArray nd(3, 4);

    // Add items to the List
    nd.add(0, 0, 1);
    nd.add(0, 1, 2);
    nd.add(0, 2, 3);
    nd.add(0, 3, 4);
    nd.add(1, 0, 5);
    nd.add(1, 1, 6);
    nd.add(1, 2, 7);
    nd.add(1, 3, 8);
    nd.add(2, 0, 9);
    nd.add(2, 1, 10);
    nd.add(2, 2, 11);
    nd.add(2, 3, 12);

    // Print the contents of the List
    cout << "Items in Array: " << endl;
    nd.print();
    cout << endl;
    // Remove an item from the List
    nd.remove(1, 2);

    // Print the contents of the List again
    cout << "Items in Array: " << endl;
    nd.print();
    cout << endl;
    // Test the get() method
    cout << "Item at (2, 2): " << nd.get(2, 2) << endl;
    cout << "Item at (1, 2): " << nd.get(1, 2) << endl;
    cout << "Item at (0, 3): " << nd.get(0, 3) << endl;
    cout << endl;

    // Test the getNumRows() and getNumCols() methods
    cout << "Number of rows: " << nd.getNumRows() << endl;
    cout << "Number of columns: " << nd.getNumCols() << endl;

    return 0;
}