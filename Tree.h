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
	bool insert(int key, Node* tree);
	//inserts the element beginning from the root
	bool insert(int key)
	{
		insert(key, root);
		return true;
	}
	//showing the numbers from the tree in order '<'
	void inorder(Node* tree);
	//beginning from the root
	void inorder()
	{
		inorder(root);
	}
	//will give the height of the Tree
	int height(Node* tree);
	//starting from the root
	int height()
	{
		return height(root);
	}


};