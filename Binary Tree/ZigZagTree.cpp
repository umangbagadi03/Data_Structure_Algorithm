/*
This is C++ code that performs a zigzag traversal of a binary tree. The code starts by defining a Tree Node struct, which 
has 3 fields: an integer data, and pointers to left and right child nodes. Then a function called "buildTree" is defined, 
which takes a string as input and returns the root of the tree built from the input string. The code then defines a class 
called "Solution" which contains a public function called "zigZagTraversal" which takes the root of a binary tree as input 
and returns a vector of integers representing the zigzag traversal of the tree.This function first checks if the root is 
null, if it is, it returns an empty result vector. It then creates a queue and pushes the root onto the queue. It also 
creates a boolean variable leftToRight and initializes it to true. The function then enters a while loop that continues 
until the queue is empty. In each iteration of the loop, the size of the queue is stored in a variable "size". Then the 
function creates a vector called "ans" of size "size".The function then enters a second loop that iterates size number of 
times. In each iteration, it takes the front node of the queue and pushes its left and right children onto the queue if 
they are not null. The function then calculates the index of the node in the ans vector by using the leftToRight variable. 
If leftToRight is true, it uses the current index of the loop as the index, otherwise it uses size - i - 1 as the index. 
This is because for left to right, the first element of the level should be at index 0, but for right to left, the first 
element should be at the last index.The function then sets the leftToRight variable to its opposite value, effectively 
reversing the direction of traversal. And it adds the elements of the ans vector to the result vector.

Finally, the function returns the result vector.
*/

#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

class Solution {
    public:
    // function to store zig zag order traversal in list
    vector<int> zigZagTrversal(Node* root) {
        vector<int> result;
        if(root == NULL){
            return result;
        }
        queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight = true;
    	
    	while(!q.empty()) {
    	    
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    //Level Process
    	    for(int i=0; i<size; i++) {
    	        
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        //normal insert or reverse insert 
    	        int index = leftToRight ? i : size - i - 1;
    	        ans[index] = frontNode -> data;
    	        
    	        if(frontNode->left)
    	            q.push(frontNode -> left);
    	            
    	        if(frontNode->right)
    	            q.push(frontNode -> right);
    	    }
    	    
    	    //direction change karni h
    	    leftToRight = !leftToRight;
    	   
    	  for(auto i: ans) {
    	      result.push_back(i);
    	  }  
    	}
    	    return result;
    }
};
