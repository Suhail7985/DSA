//search in bst
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }

};
//search in bst?
Node* searchinbst( Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if( root->data==key){
        return root;
    }
    else if(root->data>key){
        return searchinbst(root->left,key);
    }
}
//min value of bst?
Node* minvalue( Node* root){
    if(root==NULL){
        return NULL;
    }
    while( temp->left!=NULL){
    if( root->left!=NULL){
        root=root->value
    }

}

return root->data;
}
int main(){
    Node* root=new Node(50);
    root->left=new Node(30);
    root->right=new Node(70);
    root->left->left=new Node(20);
    root->left->right=new Node(40);
    root->right->left=new Node(60);
    root->right->right=new Node(80);
    Node* temp=searchinbst(root,40);


    
}

