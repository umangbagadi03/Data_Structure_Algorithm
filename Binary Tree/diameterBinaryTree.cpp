// diameter of binary tree in cpp

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
    // function to return diameter of binary tree
    int diameter(node* root) {
        // base case
        if(root == NULL){
            return 0;
        }

        int opt1 = diameter(root -> left);
        int opt2 = diameter(root -> right);
        int opt3 = height(root -> left) + height(root -> right) + 1;

        int ans = max(opt1, max(opt2, opt3))

        return ans;
    }
};