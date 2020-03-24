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

void Tree::postorder(Node* node) {
    if (node == NULL)
        return;
    
    postorder(node->left);
    postorder(node->right);
    
    //at last print key of node
    cout << node->key << " ";
}

void Tree::preorder(Node* node) {
    if (node == NULL)
        return;

    //first print key of node
    cout << node->key << " ";

    preorder(node->left);
    preorder(node->right);
}

int Tree::height(Node* tree)
{
    if (!tree)
        return 0;
    return 1 + max(height(tree->left), height(tree->right));
}

Node* Tree::deleteNode(int value, Node* root) {
    if (root == NULL)
        return root;

    // check if key to be deleted is smaller than root's key
    if (value < root->key)
        root->left = deleteNode(value, root->left);
    // check if key to be deleted is greater that root's key
    else if (value > root->key)
        root->right = deleteNode(value, root->right);
    //if not any of the above, we found the node to be deleted.
    else {
        // node with only one child or no child
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        // node with two children, get the smallest in the right subtree
        Node* temp = minValue(root->right);
        root->key = temp->key;
        root->right = deleteNode(temp->key, root->right);
    }
    return root;
}

Node* Tree::minValue(Node* node) {
    Node* current = node;

    while (current && current->left != NULL)
        current = current->left;

    return current;
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
