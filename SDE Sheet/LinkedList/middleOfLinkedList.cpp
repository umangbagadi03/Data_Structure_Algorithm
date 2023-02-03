#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
    
    // constructor
    node(int val){    // constructor ko value de int val
        this->val=val;     // wahe value apan ne linked list k data field ko de
        next=NULL;    // next field me null bhej diya

    }
};

node* findMiddle(node* head) {
    node* slow = head;
    node* fast = head;
    
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
int main() {
  node* head = new node(1);
  head->next = new node(2);
  head->next->next = new node(3);
  head->next->next->next = new node(4);
  head->next->next->next->next = new node(5);

  node* middle = findMiddle(head);
  std::cout << "The middle element is: " << middle->val << std::endl;
  
  return 0;
}
