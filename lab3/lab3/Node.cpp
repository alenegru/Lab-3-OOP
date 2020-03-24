#include "Node.h"
#include <iostream>
Node::Node(int value)
{
	key = value;
	left = NULL;
	right = NULL;
}
Node::Node()
{
	key = NULL;
	left = NULL;
	right = NULL;
}