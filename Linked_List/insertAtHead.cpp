// insertAtHead

/*
Approach: The new node is always added before the head of the given Linked List. And newly added node becomes the new head of the Linked List. For example, if the given Linked List is 10->15->20->25 and we add an item 5 at the front, then the Linked List becomes 5->10->15->20->25. Let us call the function that adds at the front 
of the list is push(). The push() must receive a pointer to the head pointer because the push must change the head pointer to point to the new node
*/

#include<iostream>
#include<map>
using namespace std;

class Node {  // class
    public:   // access modifier
    int data;   //data
    Node* next;  // node pointer

    //constructor
    Node(int data) {   // parameters
        this -> data = data;   // this ka data equals to data
        this -> next = NULL;   // next null ko point karenga
    }

};

void insertAtHead(Node* &head, int d) {
    // new node creating at head
    Node* temp = new Node(d);   // new node bna le humne
    temp -> next = head;   // jo ye new node temp-> null ko point kar rhe hai according to our parameters, apn isko head se point karayenge quke insert karna hain linked list k sath 
    head = temp;   // ab jo ye temp node hai vo linked toh hogaye lein apneko start me add krna hai isley haed ko temp pe la lenge to ab apne linked list insert hoagye haed pe
}

int main() {
     // obj
     Node* node1 = new Node(10);
     cout << node1 -> data << endl;
     cout << node1 -> next << endl;

     return 0;
}
