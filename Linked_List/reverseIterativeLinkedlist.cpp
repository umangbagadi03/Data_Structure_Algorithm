#include <iostream>

using namespace std;

class Node {
 public:
  int data;
  Node* next;

  // constructor
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void reverseLinkedList(Node*& head) {
  if (head == NULL || head->next == NULL) {
    return;
  }

  Node* prev = NULL;
  Node* curr = head;
  Node* forward = NULL;

  while (curr != NULL) {
    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }

  head = prev;
}

int main() {
  Node* node1 = new Node(10);
  Node* node2 = new Node(5);
  Node* node3 = new Node(8);
  Node* node4 = new Node(2);
  Node* node5 = new Node(20);
  cout << node1->data << endl;
  cout << node2->data << endl;
  cout << node3->data << endl;
  cout << node4->data << endl;
  cout << node5->data << endl;
  cout << node5->next << endl;

  // Link the nodes together
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = node5;

  Node* head = node1;

  reverseLinkedList(head);

  // Print the reversed linked list
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;

  return 0;
}
