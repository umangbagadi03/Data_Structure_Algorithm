// kth smallest in cpp

// we know by inorder traversal the tree se printed in sorted manner
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right =NULL;
    }
}

int solve(BinaryTreeNode<int>* root, int& i, int k) {
    // base case
    if(root == NULL) {
        return -1;
    }
    // inorder traversal-LNR
    //L
    int left = solve(root -> left, i, k);

    if(left != -1) {
        return left;
    }
    //N
    i++;
    if(i == k) {
        return root -> data;
    }
    //R
    return solve(root -> right, i, k);
}

int kthSmallest(BinaryTreeNode<int>* root int i, int k) {
    int ans = solve(root, i, k);
    return ans;
}