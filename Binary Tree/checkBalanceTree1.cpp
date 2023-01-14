// to check balance of binary tree

#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int x){
        data = x;
        left = right = NULL;
    }
};
class Solution {
    private:
    // function to find height of binary tree
    int height(struct node* node){

        // base case
        if(node == NULL){
            return 0;
        }

        int left = height(node -> left);
        int right = height(node -> right);

        int ans = max(left, right) + 1;
        return ans;
    }

    public:
    bool isbalanced(Node* root) {
        // base case
        if(root == NULL) {
            return true;

        }
        bool left = isbalanced(root -> left);
        bool right = isbalanced(root -> right);

        bool diff = abs (height(root -> left) - height(root -> right)) <= 1;  

        if(left && right && diff) {    // if all 3 condition are satisfied
            return 1;
        }
        else {
            return false;
        }
        
    
    }
};