#ifndef PIOI_WORKSHOP_NDARRAY_H
#define PIOI_WORKSHOP_NDARRAY_H
#include <iostream>
#include <vector>

using namespace std;

class NDArray {
private:
    vector<vector<int>> items;
    int numRows, numCols;

public:
    // Constructor: Initializes the 2D vector with the specified number of rows and columns.
    NDArray(int rows, int cols);

    // Adds an item at the specified row and column indices. Returns true if successful, false otherwise.
    bool add(int row, int col, int item);

    // Removes the item at the specified row and column indices. Returns true if successful, false otherwise.
    bool remove(int row, int col);

    // Returns the item at the specified row and column indices. Returns -1 if the indices are out of bounds.
    int get(int row, int col);

    // Prints the contents of the 2D vector.
    void print();

    // Returns the number of rows in the 2D vector.
    int getNumRows();

    // Returns the number of columns in the 2D vector.
    int getNumCols();
};

int NDArray_main();

#endif