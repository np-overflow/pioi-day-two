#ifndef PIOI_WORKSHOP_BINARYNODE_H
#define PIOI_WORKSHOP_BINARYNODE_H

typedef int BinaryNodeItemType;

struct BinaryNode
{
	BinaryNodeItemType item;		// data item
	BinaryNode* left;				// pointer pointing to left subtree
	BinaryNode* right;				// pointer pointing to right subtree
};			

#endif