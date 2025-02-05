//in this we have ro make a node in which we have data and two pointers left and right and then 
//another two pointers for the next node
//root.left and root.right
//root.left.left and root.left.right
//trees are unidirectional
//if node=n then edeges=n-1
//leaf nodes=nodes with 0 children
//atmost 2 children for a node known as binary tree
//depth=no of edges in the path from root to node
//height=no of edges in the longest path from node to leaf
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    /*
        1
       / \
      2   3
    */
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    /*
        1
       / \
      2   3
     / \
    4   5
    */
  
}

