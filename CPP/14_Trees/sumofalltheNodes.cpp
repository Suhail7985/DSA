//sum of all the nodes in tree
#include<iostream>
#include<queue>
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

int sumOfAllNodes(Node* root)
    