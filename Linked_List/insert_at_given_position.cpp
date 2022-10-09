// insertAtPosition

/*

In this method, a new element is inserted at the specified position in the linked list. For example - if the given List is 10->20->30 and a new element 100 is added at position 2, the Linked List becomes 10->100->20->30.
First, a new node with given element is created. If the insert position is 1, then the new node is made to head. Otherwise, traverse to the node that is previous to the insert position and check if it is null or not. 
In case of null, the specified position does not exist. In other case, assign next of the new node as next of the previous node and next of previous node as new node. The below figure describes the process, if the insert node is other than the head node.

*/

#include<iostream>
using namespace std;

//node structure
struct Node {
    int data;
    Node* next;
};
class LinkedList {
    private:
      Node* head;
    public:
      LinkedList() {
        head = NULL;
      }
}

//Inserts a new element at the given position
void push_at(int newElement, int position) {
    Node* newNode = new Node();   // node that we want in that specific position
    newNode -> data = newElement;
    newNode -> next = NULL;
    if(position < 1) {    // 1 se pahle kaise rhe sakta
      cout<<"\nposition should be >= 1.";
    } else if (position == 1) {
      newNode -> next = head;  // position 1 hai means head newnode ka next head hoga
      head = newNode;  // head newnode pe aayega quke pos = 1 hai

    } else {
      Node* temp = head;
        for(int i = 1; i < position-1; i++) {
          if(temp != NULL) {
            temp = temp->next;
          }
        }
     
        if(temp != NULL) {
          newNode->next = temp->next;
          temp->next = newNode;  
        } else {
          cout<<"\nThe previous node is null.";
        }       
      }
    }
};

// test the code
int main() {
  LinkedList MyList;

  //Add three elements at the end of the list.
  MyList.push_back(10);
  MyList.push_back(20);
  MyList.push_back(30);
  MyList.PrintList();

  //Insert an element at position 2
  MyList.push_at(100, 2);
  MyList.PrintList();

  //Insert an element at position 1
  MyList.push_at(200, 1);  
  MyList.PrintList();  
  
  return 0; 
}
