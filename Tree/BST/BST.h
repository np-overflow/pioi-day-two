#ifndef PIOI_WORKSHOP_BST_H
#define PIOI_WORKSHOP_BST_H


#include<iostream>
using namespace std;

#include "BinaryNode.h"

class BST
{
private:

	BinaryNode* root;		// root of the BST

public:

	// constructor
	BST();

	// search an item in the binary search tree
	BinaryNode* search(BinaryNodeItemType target);
	BinaryNode* search(BinaryNode* root, BinaryNodeItemType target);

	// insert an item to the binary search tree
	void insert(BinaryNodeItemType item);
	void insert(BinaryNode*& root, BinaryNodeItemType item);

	// delete an item from the binary search tree
	void remove(BinaryNodeItemType target);
	void remove(BinaryNode*& root, BinaryNodeItemType target);

	// traverse the binary search tree in inorder
	void inorder();
	void inorder(BinaryNode* t);

	// traverse the binary search tree in preorder
	void preorder();
	void preorder(BinaryNode* t);

	// traverse the binary search tree in postorder
	void postorder();
	void postorder(BinaryNode* t);

	// check if the binary search tree is empty
	bool isEmpty();

	// count the number of nodes in the binary search tree
	int countNodes();
	int countNodes(BinaryNode* t);

	// compute the height of the binary search tree
	int getHeight();
	int getHeight(BinaryNode* t);

	// check if the binary search tree is balanced
	bool isBalanced();
	bool isBalanced(BinaryNode* t);
};

int BST_main();

#endif