#include "Tree.h"
#include "Node.h"
#include <iostream>
#include <algorithm> 
using namespace std;

Tree::Tree()
{
	root = NULL;
}

void Tree::insert(int value, Node* tree)
{
    if (!tree)
    {
        tree = new Node(value);
        root = tree;
    }
    else
    {
        if (value < tree->key)
        {
            if (!tree->left)
            {
                Node* treeTemp = new Node(value);
                tree->left = treeTemp;
            }
            else
                insert(value, tree->left);
        }
        else
        {
            if (!tree->right)
            {
                Node* treeTemp = new Node(value);
                tree->right = treeTemp;
            }
            else
                insert(value, tree->right);
        }
    }
}

void Tree::inorder(Node* tree)
{
    if (!tree)
        return;
    inorder(tree->left);
    cout << tree->key << " ";
    inorder(tree->right);

}