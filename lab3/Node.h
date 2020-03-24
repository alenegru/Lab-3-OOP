#pragma once


class Node
{
	friend class Tree;
public:
	int key;
	Node* left, * right;
public:
	Node(int value);
	Node();

};
