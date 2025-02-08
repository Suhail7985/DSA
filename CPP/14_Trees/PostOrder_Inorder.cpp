#include<iostream>

using namespace std;
class Node{
    public:
    int data;
    Tree* left;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
        }


};

void PostOrder(Node *root){
    if(root== NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    PostOrder(root);
    cout<<endl;
}