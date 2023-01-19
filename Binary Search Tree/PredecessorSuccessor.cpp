/*
in this code we are traversing the binary tree and checking the current node data
if it is greater than the key we are looking for, we update the successor value with the current node value
and move left in the tree.
If it is less than the key we are looking for, we update the predecessor value with the current node value
and move right in the tree.
when we find the key, we have the last value of predecessor and successor.
to find the actual predecessor we traverse the left subtree and find the rightmost element
similarly for successor,

*/

// predecessor and successor in cpp

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
    ~BinaryTreeNode() {
        if(left) {
            delete left;
        }
        if(right) {
            delete right;
        }
    }
};

pair<int, int> predecessorSuccessor(BinaryTreeNode<int>* root, int key) {
    // find key
    BinaryTreeNode<int>* temp = root;
    int pred = -1;
    int succ = -1;

    while(temp != NULL) {
    if(temp -> data > key) {
        succ = temp -> data;
        temp = temp -> left;   // move left in the tree
        
    }
    else if(temp -> data < key) {  // agar temp -> data < key
        pred = temp -> data;
        temp = temp -> right; // move right in the tree
        
    }
    else { // if temp -> data == key
        break;
    }
}
// pred and succ

// pred
BinaryTreeNode<int>* leftTree = temp -> left;
while(leftTree != NULL) {
    pred = leftTree -> data;
    leftTree = leftTree -> right;
}

// succ
BinaryTreeNode<int>* rightTree = temp -> right;
while(rightTree != NULL) {
    succ = rightTree -> data;
    rightTree = rightTree -> left;
}

pair<int, int> ans = make_pair(pred, succ);
return ans;

// main function to test the code
int main() {
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(5);
    root -> left = new BinaryTreeNode<int>(3);
    root -> right = new BinaryTreeNode<int>(8);
    root -> left -> left = new BinaryTreeNode<int>(2);
    root -> left -> right = new BinaryTreeNode<int>(4);
    root -> right -> left = new BinaryTreeNode<int>(6);
    root -> right -> right = new BinaryTreeNode<int>(9);

    pair<int, int> ans = predecessorSuccessor(root, 5);
    cout << ans.first << " " << ans.second << endl;
}
