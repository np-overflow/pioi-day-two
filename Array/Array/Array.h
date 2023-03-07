#ifndef PIOI_WORKSHOP_ARRAY_H
#define PIOI_WORKSHOP_ARRAY_H
#include <iostream>

using namespace std;

const int ARRAY_MAX_SIZE = 100;
typedef int ArrayItemType;

class Array
{
private:
	ArrayItemType items[ARRAY_MAX_SIZE];
	int size;

public:

	Array();

	bool add(ArrayItemType item);

	bool add(int index, ArrayItemType item);

	bool remove(int index);

	ArrayItemType get(int index);

	void print();

	int getLength();

	bool isEmpty();
};

int array_main();

#endif