/*
Solution 1: Brute-Force

Approach: We know intersection means a common attribute present between two entities. Here, we have linked lists as given entities. 
What should be the common attribute for two linked lists? 

If you believe a common attribute is a node’s value, then think properly! If we take our example 1, there we can see both 
lists have nodes of value 3. But it is not the first intersection node. So what’s the common attribute?

It is the node itself that is the common attribute. So, the process is as follows:-

1.Keep any one of the list to check its node present in the other list. Here, we are choosing the second list for this task.
2.Iterate through the other list. Here, it is the first one. 
3.Check if the both nodes are the same. If yes, we got our first intersection node.
4.If not, continue iteration.
5.If we did not find an intersection node and completed the entire iteration of the second list, then there is no intersection 
between the provided lists. Hence, return null.
*/

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

// utility function to insert a node at the end of the linked list
void insertNode(node* &head,int val) {
    node* newNode = new node(val); //create new node with value
    
    // for the first node
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    node* temp = head;
    // Iterate to the end of the list
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode; // insert node at the end
    return;
}

// utility function to check presence of an intersection  
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

