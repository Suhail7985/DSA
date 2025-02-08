//https://www.naukri.com/code360/problems/two-sum-in-a-bst_1062631?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};

void inorder(BinaryTreeNode<int>* root, vector<int>& vec) {
    if (root == NULL) return;
    inorder(root->left, vec); // Traverse left subtree
    vec.push_back(root->data); // Visit node
    inorder(root->right, vec); // Traverse right subtree
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
    vector<int> inorderVal;
    inorder(root, inorderVal); // Fill inorderVal with BST values

    int i = 0;
    int j = inorderVal.size() - 1;

    while (i < j) {
        int sum = inorderVal[i] + inorderVal[j];
        if (sum == target) {
            return true; // Found the pair
        }
        if (sum > target) {
            j--; // Decrease the sum by moving the right pointer left
        } else {
            i++; // Increase the sum by moving the left pointer right
        }
    }
    return false; // No pair found
}
int main(){
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(4);
    root->left = new BinaryTreeNode<int>(2);
    root->right = new BinaryTreeNode<int>(5);
    root->left->left = new BinaryTreeNode<int>(1);
    root->left->right = new BinaryTreeNode<int>(3);
    cout << boolalpha << twoSumInBST(root, 7) << endl; // Output
    }

