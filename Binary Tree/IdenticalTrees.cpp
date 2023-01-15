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
    // function to check if trees are identical or not

    bool isIdentical(node *r1, node *r2) {
        // base case
        if(r1 == NULL && r2 == NULL){
            return true;
        }
        if(r1 == NULL && r2 != NULL){
            return false;
        }
        if(r1 != NULL && r2 == NULL){
            return false;
        }

        bool left = isIdentical(r1 -> left, r2 -> left);
        bool right = isIdentical(r1 -> right, r2 -> right);

        bool value = r1 -> data == r2 -> data;

        if(left && right && value) {
            return true;
        }
        else {
            return false;
        }
    }
}