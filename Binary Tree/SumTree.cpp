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
    pair<bool, int> isSumTreeFast(node* root) {

        // base case
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        // leaf node
        if(root -> left == NULL && root -> right == NULL) {
            pair<bool, int> p = make_pair(true, root -> data);
            return p;
        }

        pair<bool, int> leftAns = isSumTreeFast(root -> left);
        pair<bool, int> rightAns = isSumTreeFast(root -> right);
        
        bool isLeftSumTree = leftAns.first;
        bool rightSumTree = rightAns.first;

        int leftSum = leftAns.second;
        int rightSum = rightAns.second;

        bool condn = root -> data == leftSum + rightSum;

        pair<bool, int> ans;

        if(isLeftSumTree && isRightSumTree && condn) {
            ans.first = true;
            ans.second = root -> data + leftSum + rightSum;
        }
        else {
            ans.first = false;
        }
        return ans;

    }
}