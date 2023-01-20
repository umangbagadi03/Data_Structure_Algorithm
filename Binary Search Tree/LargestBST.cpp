/*
This code defines a class 'TreeNode' which represents a node in a binary tree, with an integer 'data', and two pointers to its left and right children. It also defines a class 'info' that holds some properties of a binary tree.

The main function 'largestBST' takes a pointer to the root of a binary tree and finds the largest sub-tree in the binary tree that is a binary search tree. It does this by calling the helper function 'solve' which takes a pointer to a node in the tree, and an integer 'ans' which will store the size of the largest sub-tree.

The function 'solve' starts by handling the base case when the input node is NULL. It then recursively calls itself on the left and right children of the input node, obtaining 'info' objects for each subtree.

Next, it sets the properties of the current node such as the size, maximum and minimum values. Then it checks if the current subtree is a binary search tree by checking if the left and right subtrees are binary search trees and the current node's value is within the range of its left and right subtrees.

If the current subtree is a binary search tree, it updates the 'ans' variable with the size of the current subtree if it is larger than the previous largest subtree. Finally, it returns an 'info' object for the current subtree.

The 'largestBST' function returns the value stored in the 'ans' variable, which is the size of the largest binary search subtree.
*/

class TreeNode {
    public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = datal
        left = NULL;
        right = NULL;
    }
};

class info {
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(TreeNode<int>* root, int &ans) {
    // base case
    if (root == NULL) {
        return{INT_MIN, INT_MAX, true, 0};
    }
    info left = solve(root -> left, ans);
    info right = solve(root -> right, ans);

    info currNode;

    currNode.size = left.size + right.size + 1;
    currNode.maxi = max(root -> data, right.maxi);
    currNode.mini = mini(root -> data, left.mini);

    if(left.isBST && right.isBST && (root -> data > left.maxi && root -> data < right.mini)) {
        currNode.isBST = true;
    }
    else {
        currNode.isBST = false;
    }

    // answer update
    if(currNode.isBST){
        ans = max(ans, currNode.size);
    }
    return currNode;
}

int largestBST(TreeNode<int>* root) {
    int maxSize = 0;
    info temp = solve(root, maxSize);
    return maxSize;
}
