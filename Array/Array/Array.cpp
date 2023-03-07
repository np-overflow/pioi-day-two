#include "Array.h"

Array::Array() { size = 0; }

bool Array::add(ArrayItemType item) {
	bool success = size < ARRAY_MAX_SIZE;
	if (success) {
		items[size] = item;
		size++;
	}
	return success;
}

bool Array::add(int index, ArrayItemType item) {
	bool success = (size < ARRAY_MAX_SIZE) && (index >= 0);
	if (success) {
		for (int pos = size; pos >= index; pos--) {
			items[pos] = items[pos - 1];
		}
		items[index] = item;
		size++;
	}
	return success;
}

bool Array::remove(int index) {
	bool success = (index < size) && (index >= 0);
	if (success) {
		for (int pos = index; pos < size; pos++) {
			items[pos] = items[pos + 1];
		}
		size--;
	}
	return success;
}

ArrayItemType Array::get(int index) {
	ArrayItemType dataItem;
	bool success = (index < size) && (index >= 0);
	if (success) {
		dataItem = items[index];
	}
	return dataItem;
}

void Array::print() {
	for (int i = 0; i < size; i++) {
		cout << items[i] << " ";
	}
	cout << endl;
}

int Array::getLength() { return size; }

bool Array::isEmpty() { return size == 0; }

int array_main()
{
	Array arr;
	cout << "Is the array empty? " << arr.isEmpty() << endl;

	cout << "Adding 5 to the array: " << arr.add(5) << endl;
	cout << "Adding 10 to the array: " << arr.add(10) << endl;
	cout << "Adding 15 to the array: " << arr.add(15) << endl;

	cout << "Printing the array: ";
	arr.print();

	cout << "Getting item at index 1: " << arr.get(1) << endl;

	cout << "Removing item at index 1: " << arr.remove(1) << endl;

	cout << "Printing the array: ";
	arr.print();

	cout << "Is the array empty? " << arr.isEmpty() << endl;

	cout << "Adding 20 to the array: " << arr.add(20) << endl;
	cout << "Adding 25 to the array: " << arr.add(25) << endl;
	cout << "Adding 30 to the array: " << arr.add(30) << endl;
	cout << "Adding 35 to the array: " << arr.add(35) << endl;
	cout << "Adding 40 to the array: " << arr.add(40) << endl;

	cout << "Printing the array: ";
	arr.print();

	cout << "Getting item at index 3: " << arr.get(3) << endl;
	cout << "Getting item at index 6: " << arr.get(6) << endl;

	cout << "Removing item at index 0: " << arr.remove(0) << endl;
	cout << "Removing item at index 4: " << arr.remove(4) << endl;

	cout << "Printing the array: ";
	arr.print();

	return 0;
}