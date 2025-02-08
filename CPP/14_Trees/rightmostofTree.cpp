// //rightmost of the tree
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
    
//     Node(int val) {
//         data = val;
//         left = NULL;
//         right=NULL;

//     }
// };
// Node* rightmost( Node* root ){
//     if(root == NULL) return NULL;
//     Node* current = root;
//     while(current->right != NULL){
//         current = current->right;



// }
     
// }
// int main(){
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);
//     cout<<rightmost(root)->data<<endl;

// }


#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void printRightmost(TreeNode* root) {
    if (!root) return;

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front();
            q.pop();

            // If it's the last node in the current level, print it
            if (i == size - 1) {
                std::cout << node->val << " ";
            }

            // Push right first to ensure rightmost nodes are processed first
            if (node->right) {
                q.push(node->right);
            }
            if (node->left) {
                q.push(node->left);
            }
        }
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(5);
    root->right->right->right = new TreeNode(6);

    std::cout << "Rightmost nodes of the tree: ";
    printRightmost(root);
    std::cout << std::endl;

    
}
