// reverse linked list in K groups

#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        
        // jab bhi koi linked list initiate hoge
        Node(int data){
            this -> data = data;   
            this -> next = NULL;   // initially to null ko hi point karenge
        }
};

Node* kReverse(Node* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    Node* next = NULL; //pointer to store the next node in the linked list
    Node* curr = head; //pointer to store the current node in the linked list
    Node* prev = NULL; //pointer to store the previous node in the linked list
    int count= 0; //counter to keep track of how many nodes have been reversed
    
    while( curr != NULL && count < k ) { //reverse k nodes or until the end of the linked list is reached
        next = curr -> next; //store the next node
        curr -> next = prev; //reverse the current node
        prev = curr; //move prev pointer to the current node
        curr = next; //move current pointer to the next node
        count++; //increment the counter
    }
    
    //step2: Recursion to reverse the remaining nodes
    if(next != NULL) {
        head -> next = kReverse(next,k);
    }
    
    //step3: return head of reversed list
    return prev;
}

void printList(Node* head) { //function to print the linked list
    Node* curr = head;
    while(curr != NULL) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << endl;
}
