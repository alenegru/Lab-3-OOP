#include "Node.h"
#include "Tree.h"
#include "Tests.h"
#include <iostream>
#include <cassert>
using namespace std;


void Test()
{
	Tree tree;
	int numbers[] = { 1,2,3,4,5 };
	int len = sizeof(numbers) / sizeof(numbers[0]);
	for (int i = 0; i < len; i++)
		assert(tree.insert(numbers[i])==true);

	assert(tree.height()==5);
	cout << "all good" << endl;
}