// insertAtHead,tail

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
// insertAtHead
void insertAtHead(Node* &head, int d) {
    // new node creating at head
    Node* temp = new Node(d);   // new node bna le humne
    temp -> next = head;   // jo ye new node temp-> null ko point kar rhe hai according to our parameters, apn isko head se point karayenge quke insert karna hain linked list k sath 
    head = temp;   // ab jo ye temp node hai vo linked toh hogaye lein apneko start me add krna hai isley haed ko temp pe la lenge to ab apne linked list insert hoagye haed pe
}

// insertAtTail
void insertAtTail(Node* &tail, int d) {
    // new node at tail
    Node* temp = new Node(d);
    tail -> next = temp;   // jo apne tail hai jisme apneko naye tail lagana hai toh uska next apne new node temp kar diya
    tail  = temp;    // aur jo temp hai usko tail se link kardiya matlab ab ye apna new tail
}

void print(Node* &head) {   // printing

    if(head == NULL) {  // if empty then return list is empty
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {   // jab tak temp null nhi ho jata
        cout << temp -> data << " ";
        temp = temp -> next;  // agey agey badhta rahega 
    }
    cout << endl;
}

int main() {
    // obj
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;

    return 0;
}
