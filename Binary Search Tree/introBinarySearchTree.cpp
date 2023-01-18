// creation of binary search tree in cpp

#include<iostream>
#include<queue>
using namespace std;

 class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> righ  = NULL;
    }

};

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);   // root k print k bad seperator null dal diya matlab next level print hone lagege

    while(!q.empty()) {   // phir se check karenga k apn n queue empty hue ya nhi
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {    // apn n har level k bad null dala hai yani null aagya toh seperator lag jayega aur next level next line pe perint hone lagege
            // purana level complete traverse ho chuka hai
            cout << endl;   // next level 
            if(!q.empty()) {    // 
                // queue still has some child node
                q.push(NULL);
            }
        }
        else {
            cout << temp -> data << " ";
            if(temp -> left) {
                q.push(temp -> left);   // left wala part
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

// inorder traversal
void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

// preorder traversal
void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    
    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

// postorder traversal
void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

Node* insertIntoBST(Node* root, int d) {
    // base case
    if(root == NULL) {
        root = new Node(d);
        return root;
    }
    if(d > root -> data) {
        // right part me insert krna hai
        root -> right = insertIntoBST(root -> right, d);

    }
    else{
        // right part me insert krna hai
        root -> left = insertIntoBST(root -> left, d);
    }
    return root;
}

void takeInput(Node* &root) {
    int data;
    cin >> data;

    while(data != -1) {
        insertIntoBST(root, data);
        cin >> data;
    }
}

int main (){
    Node* root = NULL;

    cout << " Enter data to create BST "<< endl;
    takeInput(root);

    cout << " printing the BST " << endl;
    levelOrderTraversal(root);

    cout << " Printing Inorder " << endl;
    inorder(root);

    cout << " Printing Preorder " << endl;
    preorder(root);

    cout << " Printing Postorder " << endl;
    postorder(root);

    return 0;
}
