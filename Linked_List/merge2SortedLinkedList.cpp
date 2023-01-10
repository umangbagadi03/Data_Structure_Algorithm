/*
The code is a C++ implementation of a function that merges two sorted linked lists into a single sorted linked list.

Here's how the code works:

1.First, it includes the necessary headers and defines a class for the linked list nodes. Each node contains an integer 
'data' and a pointer to the next node in the list (next). The class also includes a constructor that initializes the 
data and sets the next pointer to NULL, and a destructor that frees up the memory of the next node, if it is not already NULL.
2.Next, the main function sortTwoLists is defined, which takes two sorted linked lists as input and returns the head 
of the merged and sorted linked list.
3.Inside the function, two base cases are handled, first, if first linked list is empty, it returns the second list and 
second, if second linked list is empty, it returns the first list.
4.The function initializes a pointer result to keep track of the head of the final sorted linked list, it then compares 
the first element of each linked list, and sets the result pointer to the one with the smaller value.
5.Then, the function initializes a pointer current to keep track of the current position in the final sorted linked list.
6.The function then enters a while loop that continues until one of the lists is exhausted. Inside the loop, the function
compares the current element of the first list (first->data) and the current element of the second list (second->data) 
and add element from the list which have smaller data.
7.After the while loop, if the first linked list is not exhausted, the function appends the remaining elements of first 
list to the final list by adjusting the next pointer of the current node.
8.Similarly, if the second linked list is not exhausted, the function appends the remaining elements of second list to the
final list.
9.Finally, the function returns the head of the final sorted linked list(result)
10.he main function, creates 2 linked lists first and second, with some sample data, then calls the sortTwoLists function 
to merge these 2 linked list and stored the final result in a new linked list called 'result'.

Finally, it prints the elements of the final list one by one by iterating through the list using a while loop, and then deletes the result linked list to release the memory.
*/

#include<iostream>
using namespace std;

// Define the Node class
class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        next = NULL;
        this->data = data;
    }
    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};

// Main function to merge two sorted linked lists
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {
    // If first linked list is empty, return second list
    if(first == NULL) return second;
    // If second linked list is empty, return first list
    if(second == NULL) return first;

    // Initialize a pointer to keep track of the head of the final sorted linked list
    Node<int>* result=nullptr;

    // Compare the first element of each linked list, and set the result pointer to the one with the smaller value
    if(first->data <= second->data) 
    {
        result=first;
        first=first->next;
    }
    else 
    {
        result=second;
        second=second->next;
    }
    // Initialize a pointer to keep track of the current position in the final sorted linked list
    Node<int>* current = result;

    // Loop through the first and second linked lists and add elements to the final list in sorted order
    while(first != NULL && second != NULL) {
        if(first->data <= second->data) 
        {
            current->next = first;
            first = first->next;
        }
        else
        {
            current->next = second;
            second = second->next;
        }
        current = current->next;
    }
    // If the first linked list is not exhausted, append the remaining elements to the final list
    if(first != NULL) 
    {
        current->next = first;
    }
    // If the second linked list is not exhausted, append the remaining elements to the final list
    if(second != NULL) 
    {
        current->next = second;
    }
    // Return the head of the final sorted linked list
    return result;
}

int main()
{
    // Create the first linked list
    Node<int>* first = new Node<int>(1);
    first->next = new Node<int>(4);
    first->next->next = new Node<int>(6);
    first->next->next->next = new Node<int>(8);
    cout << "First linked list: ";
    Node<int>* current = first;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    
    // Create the second linked list
    Node<int>* second = new Node<int>(2);
    second->next = new Node<int>(3);
    second->next->next = new Node<int>(5);
    second->next->next->next = new Node<int>(7);
    cout << "Second linked list: ";
    current = second;
    while (current != NULL) {

            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    
        // Merge the two linked lists and store the result in a new linked list
        Node<int>* result = sortTwoLists(first, second);
        cout << "Merged linked list: ";
        current = result;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
        delete result;
        return 0;
    }

