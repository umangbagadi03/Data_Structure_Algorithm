#include<iostream>
using namespace std;

// class
class Node {
public:
    int data;
    Node *next;
    Node(int data)
    {

        // constructor
        this -> data = data;  // parameter hai k initially kaisa rhega
        this -> next = NULL;
    }
};

Node* reverseLinkedList(Node *head)
{
    if (head == NULL || head -> next == NULL) {   // kuch hai hi nhi toh head hi return hoga
        return head;
    }

    Node* prev = NULL;   // previous null ko point kar rha initially
    Node* curr = head;   // curr haed pe hai
    Node* forward = NULL;  // forward bhi null pe hai

    while(curr !=NULL){     // loop jab tak curr null nhi ho jata
        forward = curr -> next;  // ye curr se aagey wale pe chala jayega 
        curr -> next = prev;  // aur jo curr hai usse uske previous wale se link kardiya gaya, matlab apneko reverse krna hai n isley sab list ko unke aagey ewale se tod kar prev wale se link kiya jayega
        prev = curr;   // ab prev pe curr aagya apna 
        curr = forward;   // forward jo pahle curr k aage apn n rakha tha ab curr ko waha lekr gaye apn quke ab next wale ko reverse krna hain
    }

    return prev
}


