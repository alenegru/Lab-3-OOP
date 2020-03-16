#pragma once


class Node
{
	//friend class Tree;
private:
	int key;
	Node* left, * right;
public:
	Node(int value);
	Node();

};