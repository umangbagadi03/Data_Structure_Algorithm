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

// code of traversal is just for the purpose of presenting it in the form of tree
// root k print k bad seperator null dal diya matlab next level print hone lagege
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
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
// to insert in binary tree
Node* insertIntoBST(Node* root, int d) {
    // base case
    if(root == NULL) {   // agar root NULL hai to data d daldo usme
        root = new Node(d);
        return root;
    }
    if(d > root -> data) {    // jo d data dala vo ahr bada hai root node se toh right me jayega
        // right part me insert krna hai
        root -> right = insertIntoBST(root -> right, d);

    }
    else{
        // right part me insert krna hai
        root -> left = insertIntoBST(root -> left, d);   // chota rha toh left me jayega
    }
    return root;
}

// min max in binary search tree
Node* minVal(Node* root) {
    Node* temp = root;   // root pe temp rakh hai

    while(temp -> left != NULL) {   // left me hi milenga n bro min toh left me jao null tak
        temp = temp -> left;   // temp equals to temp ka next
    }
    return temp;
}
// for max
Node* maxVal(Node* root) {   // same max k liye right me milenga
    Node* temp = root;

    while(temp -> right != NULL) {
        temp = temp -> right;
    }
    return temp;
}

void takeInput(Node* &root) {   // function to take user input
    int data;
    cin >> data;

    while(data != -1) {   // as long as long data -1 nhi ho jata tab tak insert krte rho  matlab jab tak null nhi ata tab tak insert krte jao
        insertIntoBST(root, data);
        cin >> data;
    }
}

int main (){
    Node* root = NULL;

    cout << " Enter data to create BST "<< endl;
    takeInput(root);

    // function call
    cout << " printing the BST " << endl;
    levelOrderTraversal(root);
/*
    cout << " Printing Inorder " << endl;
    inorder(root);

    cout << " Printing Preorder " << endl;
    preorder(root);

    cout << " Printing Postorder " << endl;
    postorder(root);
*/
    // finction call for min max
    cout << "Min value is " << minVal(root) -> data << endl;
    cout << "Max value is " << maxVal(root) -> data << endl;

    return 0;
}
