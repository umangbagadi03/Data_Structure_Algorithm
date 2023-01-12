#include<iostream>
using namespace std;

class node {
    public:
        int num; // contains the data in the node
        node* next; // points to the next node in the list
        // constructor to create node
        node(int val) {
            num = val;
            next = NULL;
        }
};

// utility function to insert node at the end of the linked list
void insertNode(node* &head,int val) {
    node* newNode = new node(val); //create new node with value
    
    // for first node
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    node* temp = head;
    //iterate to the end of the list
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode; // insert node at the end
    return;
}

// utility function to check presence of intersection  
node* intersectionPresent(node* head1,node* head2) {   // head1 linked list 1 pe hai // head2 LL2 pe hai
    while(head2 != NULL) {    
        node* temp = head1;
        while(temp != NULL) {
            //if both nodes are same
            if(temp == head2) return head2;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    //intersection is not present between the lists return null
    return NULL;
}

// utility function to print linked list created
void printList(node* head) {
    while(head->next != NULL) {
        cout<<head->num<<"->";
        head = head->next;
    }
    cout<<head->num<<endl;
}

int main() {
    // creation of both lists 
    node* head = NULL;
    insertNode(head,1); //inserting nodes in the first list
    insertNode(head,3);
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,4);
    node* head1 = head;
    head = head->next->next->next;
    node* headSec = NULL;
    insertNode(headSec,3); //inserting nodes in the second list
    node* head2 = headSec;
    headSec->next = head; //connecting the second list to the first one
    //printing of the lists
    cout<<"List1: "; printList(head1);
    cout<<"List2: "; printList(head2);
    //checking if intersection is present
    node* answerNode = intersectionPresent(head1,head2);
    if(answerNode == NULL )
    cout<<"No intersection\n";
    else
    cout<<"The intersection point is "<<answerNode->num<<endl;
    return 0;
}

