#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};
int Height(Node* root){
    if(root == NULL){
        return -1;
    }
    int leftH=height(root->left);
    int rightH=height(root->right);
    return max(leftH,rightH)+1;
}

   int main() {
    Node* root = NULL;
    root = insert(root, 5);
    insert(root, 3);
    insert(root, 7);
    insert(root, 2);
    insert(root, 4);
    insert(root, 6);
    insert(root, 8);

    cout << "Height of the tree: " << Height(root) << endl;

    return 0;
}