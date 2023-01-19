// normal bst to stable bst in cpp

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

TreeNode<int>* inorderToBST(int s, int e, vector<int> &in) {
    // basee case 
    if(s > e){
        return NULL;
    }
    int mid = (s + e)/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    root -> left = inorderToBST(s, mid-1, in);
    root -> right = inorderToBST(mid+1, e, in);
    return root;
}

TreeNode<int>* flatten(TreeNode<int>* root){
    vector<int> inorderVal;   // ekk vector bana inorder usme inorderVal dal diye
    
    // store inorder -> sorted values   
    inorder(root, inorderVal);   // firstly we have to store the BST tree in array using inorder trversal which will sort it
    
    return inorderToBST(0, inorderVal.size()-1, inorderVal);