//find Number of nodes in tree
#include <iostream>
#include <queue>
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
int countNodes(Node *root){
    if(root == NULL){
        return 0;
}
int lCount=countNodes(root->left);
int rcount=countNodes(root->right);
return lCount+rcount+1;
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right=new Node(5);
    int count = countNodes(root);
    cout<<count<<endl;
}

