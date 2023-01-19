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

    while(temp -> data != key) {
        if(temp -> data > key){
            temp = temp -> left;   // 
            succ = temp -> data;
        }
        else {
            temp = temp -> right;
            pred = temp -> data;
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
        pred = rightTree -> data;
        rightTree = rightTree -> left;
    }

    pair<int, int> ans = make_pair(pred, succ);
    return ans;