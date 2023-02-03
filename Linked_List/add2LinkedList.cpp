/*
1.The first step is to reverse the input linked lists using the helper function "reverse". This function iterates through 
the linked list using a while loop, and for each node it updates the pointers so that the next node becomes the previous 
node, reversing the order of the linked list. The reversed first and second linked lists are returned.

2.Next, the helper function "add" is called to add the reversed first and second linked lists. Inside the "add" function, 
it initializes a carry variable to 0, and creates pointers for the head and tail of the answer linked list.
It then loops through the first and second linked list as long as there are still nodes in one or both of the lists or the carry is not equal to 0.

3.For each iteration, it retrieves the data of the current node from the first and second linked lists, if the current node 
is not null. Then it adds the carry, the value of the first linked list node, and the value of the second linked list node.

4.It calculates the digit of the sum by taking the remainder when dividing the sum by 10. Then it creates a new node with 
this digit and adds it to the answer linked list using the "insertAtTail" function.

5.It updates the carry to the quotient when dividing the sum by 10. Then it moves to the next nodes of both the linked 
lists, if they are not null.

6.Once the while loop exits, the answer linked list contains all the digits of the sum in the reverse order.

7.Final step is to reverse the linked list again to get the final sum in the original order of digits using reverse function again.
returns the final reversed ans linked list.

*/

#include<iostream>
using namespace std;

// Definition of a node in the linked list
class Node
{
    public:
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
    private:
    // Helper function to reverse a linked list
    Node* reverse(Node* head) {
        // initialize pointers to traverse the linked list
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        // traverse the linked list and reverse the pointers
        while(curr != NULL) {
            next = curr -> next; 
            curr -> next = prev;  // reverse the pointer to the next node
            prev = curr;
            curr = next;
        }
        return prev; // return the new head of the reversed linked list
    }
    
    // Helper function to insert a node at the tail of a linked list
    void insertAtTail(struct Node* &head, struct Node* &tail, int val) {
        Node* temp = new Node(val);
        
        // if the linked list is empty
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    
    // Helper function to add two linked lists
    struct Node* add(struct Node* first, struct Node* second) {
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        // traverse both linked lists and add their values
        while(first != NULL || second != NULL || carry != 0) {
            
            int val1 = 0;      // get value from first linked list
            if(first != NULL)
                val1 = first -> data;
                
            int val2 = 0;   // get value from second linked list
            if(second !=NULL)
                val2 = second -> data;
            
            // Sum the values and carry
            int sum = carry + val1 + val2;     // add the values and carry
            
            // Get the digit of the sum
            int digit = sum%10;     // get the digit of the sum
            
            //create node and add in answer Linked List
            insertAtTail(ansHead, ansTail, digit);
            
            // Update the carry
            carry = sum/10;    // calculate the carry
            
            // Move to the next nodes of both the linked lists
            if(first != NULL)
                first = first -> next;   // move to the next node of first linked list
            
            if(second != NULL)
                second = second -> next; // move to the next node of second linked list
        }
        return ansHead; // return the head of the resulting linked list
    }
    public:
    // Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // Step 1: Reverse the input
        //step 1 -  reverse input LL
        first = reverse(first);
        second = reverse(second);
        
        //step2 - add 2 LL
        Node* ans = add(first, second);
        
        //step 3 
        ans = reverse(ans);   // jo linked list ko reverse krke add kiya uske output  ko wapes reverse karenge tab jake finela list milenege
        
        return ans;
    }
};
