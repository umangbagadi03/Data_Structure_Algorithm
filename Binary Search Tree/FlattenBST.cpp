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

void inorder(TreeNode<int>* root, vector<int> &in) {
    if( root == NULL) {
        return;
    }

    // inorder se traversal kar rhe quke vo apneko sort krke de denga
    // phir uspe do pointer lagege start me i aur end me j uanke sum dekhneg target jitne aa rhe kya

    // LNR use hota inorder traversal me
    inorder(root -> left, in);   // inorder hai pahle LEFT pe jayega
    in.push_back(root -> data);   // phir inorder k vector me push hoga jo LNR ki N ka part hai  // in order me push hoga left wala part jo apn LNR me krte wahi  
    inorder(root -> right, in);  // aur phir LNR me ka Right wala part kiya jayega
}    

TreeNode<int>* flatten(TreeNode<int>* root){
    vector<int> inorderVal;   // ekk vector bana inorder usme inorderVal dal diye

    // store inorder -> sorted values
    inorder(root, inorderVal);
    int n = inorderVal.size();
    TreeNode<int>* newRoot = new TreeNode<int>(inorderVal[0]);

    TreeNode<int>* curr = newRoot;

    // 2 nd step
    for(int i = 1; i < n; i++) {
        TreeNode<int>* temp = new TreeNode<int>(inorderVal[i]);

        curr -> left = NULL;
        curr -> right = temp;
        curr = temp;
    }

    // 3 step
    curr -> left = NULL;
    curr -> right = NULL;

    return newRoot;

}
