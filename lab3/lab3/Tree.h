#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
class Tree 
{
public:
    
    friend class Node;
    
private:
	Node *root;

public:
    //constructor
	Tree();
    Tree(int data);
    //accessing the root
    Node* getRoot() { return root; }
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
    
    //TODO
    //deletes a node from a tree
    void deleteNode(int v, Node* tree);
    
    //print its nodes in postorder
    void printPostorder(Node* node);

    //print its nodes in preorder
    void printPreorder(Node* node);
    //TODO
    //returns number of Nodes
    int countNodes(Node* node);

    //returns number of Edges
    int countEdges(Node* node);
    
	//will give the height of the Tree
	int height(Node* tree);
	//starting from the root
	int height()
	{
		return height(root);
	}
};
