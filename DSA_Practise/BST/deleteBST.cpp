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
        this -> right  = NULL;
    }
};

// code of traversal is just for the purpose of presenting it in the form of tree
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {   // check if the queue is empty
        Node* temp = q.front();
        q.pop();

        cout << temp -> data << " ";
        if(temp -> left) {
            q.push(temp -> left);   // push left child
        }

        if(temp -> right){
            q.push(temp -> right);  // push right child
        }
    }
}

// insert into BST
Node* insertIntoBST(Node* root, int d){
    // base case
    if(root == NULL) {
        root = new Node(d);
        return root;
    }
    if(d > root -> data) {
        root -> right = insertIntoBST(root -> right, d);
    }
    else {
        root -> left = insertIntoBST(root -> left, d);
    }
    return root;
    
}

// code to delete node
Node* deleteFromBST(Node* root, int val) {
    // base case
    if(root == NULL) {
        return root;
    }
    if(root -> data == val) {   // val yani jo data apneko delete krna hai vo agar mil gaya toh phir
        // for 0 child
        if(root -> left == NULL && root -> right == NULL) {
            return NULL;
        }
        
        // 1 child
        // left child - ekk bacha hai jo left me hai usko upar bhejna padega uske parent ko delete krne k bad
        if(root -> left != NULL && root -> right == NULL) {  // matlab left bah not null hai aur right me bacha null hai
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        //right child - agr left null hai aur bas right me bach hai
        if(root -> left != NULL && root -> right != NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
            
        }
        
        // 2 child - dono bache hai uske jisko delete kar rhe
        if(root -> left != NULL && root -> right != NULL)  {
            int mini = minVal(root -> right) -> data;    // toh right me jo bacha hai usme se sab se kam value wala bacha nikalo
            root -> data = mini;    // aur right me k sabse kam value wale bache ko replace kar do root
       //aur right me k sabse kam value wale bache ko replace kar do root node k sath jo apnrko delete krna hai  // matlab jo root node delete krna hai uske jagh pe right me ka mini wala dal do aur mini wale k jagh pe root ko daldo
            root -> right = deleteFromBST(root -> right, mini);    // aur abdme jo apn root ko right me k chote value wale k bache jagh pe dala usko delete kar do
            return root;
        }
            
        
        
    }
    else if(root -> data > val) {   // val jo delete krna hai vo chote hai toh left me jao
        // left part me jao
        root -> left = deleteFromBST(root -> left, val);
        return root;
    }
    else {
        // right part me jao
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}

// code to take user input
void takeInput(Node* &root) {   // function to take user input
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

    // function call to delete node
    root = deleteFromBST(root, 50);


    return 0;
}









