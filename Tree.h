#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
class Tree 
{
private:
	Node *root;

public:
	Tree();
	//inserts an element on the right position in the binary search tree
	void insert(int key, Node* tree);
	//inserts the element beginning from the root
	void insert(int key)
	{
		insert(key, root);
	}
	//showing the numbers from the tree in order '<'
	void inorder(Node* tree);
	//beginning from the root
	void inorder()
	{
		inorder(root);
	}


};