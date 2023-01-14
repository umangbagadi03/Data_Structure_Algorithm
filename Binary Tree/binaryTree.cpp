#include<iostream>
#include<queue>
using namespace std;

class node {
    public :
        int data;
        node* left;
        node* right;

    node(int d) {   // constructor
        this -> data = d;   // jab bhi koi node banege vo uske bache left right as null initailize hoge
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1) {   //  agar data = -1 hai yani ko bacha nhi hai null hai
        return NULL;  
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for inserting in right of " << data << endl;
    root -> right = buildTree(root -> right);

}    // yaha abhi jo banege tree vo output tree k form me nhi dega output aisa ayega 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 apneko tree form me hona hoga level order trversal krna pdta  

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);   // root k print k bad seperator null dal diya matlab next level print hone lagege

    while(!q.empty()) {   // phir se check karenga k apn n queue empty hue ya nhi
        node* temp = q.front();
        q.pop();

        if(temp == NULL) {    // apn n har level k bad null dala hai yani null aagya toh seperator lag jayega aur next level next line pe perint hone lagege
            // purana level complete traverse ho chuka hai
            cout << end;   // next level 
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
void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

// preorder traversal
void preorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    
    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

// postorder traversal
void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

int main() {
    node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);

    //creating a Tree
    root = buildTree(root);

    //level order
    cout << "Printing the level order tracersal output " << endl;
    levelOrderTraversal(root);
    cout << "inorder traversal is:  ";
    inorder(root); 
    cout << endl << "preorder traversal is:  ";
    preorder(root); 
    cout << endl << "postorder traversal is:  ";
    postorder(root); 

    return 0;
}