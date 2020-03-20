#include "Node.h"
#include "Tree.h"
#include <iostream>
using namespace std;

int main()
{
	Tree tree;
	Node* node;
	int numbers[] = { 5,7,45,-12,-5,15,49,10,18,99,-101,-87,90 };
	//int numbers[] = { 1,2,3,4,5 };
	int len = sizeof(numbers) / sizeof(numbers[0]);
	for (int i = 0; i < len; i++)
		tree.insert(numbers[i]);
	cout << "inorder: ";
	tree.inorder();
	cout << endl << "height:" << tree.height();
	

}
