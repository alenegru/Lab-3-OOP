#include "Tree.h"
#include "Node.h"
#include <iostream>
#include <algorithm> 
using namespace std;

Tree::Tree()
{
	root = NULL;
}

Tree::Tree(int data) {
    root = new Node(data);
}

bool Tree::insert(int value, Node* tree)
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
    return true;
}

void Tree::inorder(Node* tree)
{
    if (!tree)
        return;
    inorder(tree->left);
    cout << tree->key << " ";
    inorder(tree->right);

}

int Tree::height(Node* tree)
{
    if (!tree)
        return 0;
    return 1 + max(height(tree->left), height(tree->right));
}

void Tree::deleteNode(int v, Node* tree) {
    
}

int countNodes(Node* node) {
    int counter = 1;

    if (node->left != NULL)
        counter += countNodes(node->left);

    if (node->right != NULL)
        counter += countNodes(node->right);

    return counter;
}

int Tree::countEdges(Node* node) {
    return countNodes(node) - 1;
}
