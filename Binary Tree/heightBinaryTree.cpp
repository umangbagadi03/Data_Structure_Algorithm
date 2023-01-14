// find height of binary tree

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
    public:
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
};