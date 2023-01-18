// search in bst

class BinaryTreeNode {
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
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // using recursion
    BinaryTreeNode<T> *temp = root;

    while(root != NULL){
        if( root -> data == x){   
            return true;
        }
        if(root -> data > x) {
            temp = temp -> left;
        }
        else {
            temp = temp -> right;
        }
    }
    return false;
}