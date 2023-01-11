// palindrome in linked list using middle element

#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
  private:
    // Function to find the middle of the linked list
    Node* getMid(Node* head) {
        Node* slow = head;
        Node* fast = head->next;
        
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
    
    // Function to reverse the second half of the linked list
    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
  public:
    // Function to check whether the linked list is a palindrome
    bool isPalindrome(Node* head) {
        // Edge case: if the list is empty or has only one node
        if (head->next == NULL) {
            return true;
        }
        
        // Step 1: find the middle of the linked list
        Node* middle = getMid(head);
        // Step 2: reverse the second half of the linked list
        Node* temp = middle->next;
        middle->next = reverse(temp);
        
        // Step 3: compare the first half of the original list 
        // with the second half of the reversed list
        Node* head1 = head;
        Node* head2 = middle->next;
        
        while (head2 != NULL) {
            if (head2->data != head1->data) {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        // Step 4: reverse the second half again to restore the original list
        temp = middle->next;
        middle->next = reverse(temp);
        
        return true;
    }
};


void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 2 -> 1
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    Solution s;
    if (s.isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}
