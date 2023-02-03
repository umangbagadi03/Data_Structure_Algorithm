#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){    // constructor ko value de int val
        data=val;     // wahe value apan ne linked list k data field ko de
        next=NULL;    // next field me null bhej diya

    }
};

// reversing linked list iteratively
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    
    while(currptr != NULL) {
        nextptr = currptr -> next;
        currptr -> next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;   // because ye apna new head hua so isko return kardo
    
}

// reversing linked list recursively
node* reverseRecursive(node* &head){
    node* newhead = reverseRecursive(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    
    return newhead;
}

// insert node at the end of the linked list
void insertAtTail(node* &head, int data){
    node* temp = new node(data);
    node* curr = head;
    if(head == NULL){
        head = temp;
        return;
    }
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> next = temp;
}

// display the linked list
void display(node* head){
    node* curr = head;
    while(curr != NULL){
        cout << curr -> data << "->";
        curr = curr -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,5);
    cout << "Original linked list: ";
    display(head);
    cout << "Reversed linked list (iteratively): ";
    node* newhead = reverse(head);
    display(newhead);
    cout << "Reversed linked list (recursively): ";
    node* newhead2 = reverseRecursive(newhead);
    display(newhead2);

    return 0;
}
