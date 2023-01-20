//  merge 2 bst in cpp

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

vector<int> mergeArrays(vector<int> &a, vector<int> &b) {
    vector<int> ans(a.size() + b.size());

    int i = 0, j = 0;
    int k = 0;
    while(i < a.size() && j < b.size()) {
        if(a[i] < b[j]) {
            ans[k++] = a[i];
            i++;
        }
        else {
            ans[k++] = b[i];
            j++;

        }
    }
    while(i < a.size()) {
        ans[k++] = a[i];
        i++;
    }
    while(j < b.size()) {
        ans[k++] = b[j];
        j++;
    }
}

TreeNode<int>* inorderToBST(int s, int e, vector<int> &in) {
    // basee case 
    if(s > e){               // 
        return NULL;
    }
    // step 1 find mid of inorderVal
    int mid = (s + e)/2;    // mid
    TreeNode<int>* root = new TreeNode<int>(in[mid]);   // jo mid nikala vahi apne tree ka root rhne wala hai
    // step 2
    root -> left = inorderToBST(s, mid-1, in);   // tree ki ledt me kya ayenga mid k left wala part isley s yani start se lekar mid-1 matlab mid ki ekk pahle tak 
    root -> right = inorderToBST(mid+1, e, in);   // aur tree k right me mid+1 k aagey k sab ayenge
    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2) {
    
    // step 1: store inorder
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    // step 2: merge both sorted arrays
    vector<int> mergeArray = mergeArrays(bst1, bst2);
    
    // step 3:use merged inorder array to build BST
    int s = 0, e = mergeArray.size() - 1;
    return inorderToBST(s, e, mergeArray);
} 


