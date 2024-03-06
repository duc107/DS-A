#include <iostream>
#include <cstdlib>

#include "BST.h"

using namespace std;

BST::BST() 
{
    root = NULL;
}
BST::node* BST::CreatLeaf(int key) 
{
    node*  n = new node;
    n->key = key;
    n->left = NULL;
    n->right = NULL;
}