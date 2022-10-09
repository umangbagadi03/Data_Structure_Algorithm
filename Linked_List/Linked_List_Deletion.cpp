// Deleting a node

/*
1) Delete from Beginning:

Point head to the next node i.e. second node
    temp = head
    head = head->next
    
Make sure to free unused memory
    free(temp); or delete temp;

2) Delete from End:

Point head to the previous element i.e. last second element
    Change next pointer to null
    struct node *end = head;
    struct node *prev = NULL;
    while(end->next)
    {
        prev = end;
        end = end->next;
    }
    prev->next = NULL;
    
Make sure to free unused memory
    free(end); or delete end;

3) Delete from Middle:

Keeps track of pointer before node to delete and pointer to node to delete
    temp = head;
    prev = head;
    for(int i = 0; i < position; i++)
    {
        if(i == 0 && position == 1)
            head = head->next;
            free(temp)
        else
        {
            if (i == position - 1 && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                prev = temp;
                if(prev == NULL) // position was greater than number of nodes in the list
                    break;
                temp = temp->next; 
            }
        }
    }
*/

#include<iostream>
using namespace std;

// linked list class node
class Node (
public:
    int data;
    Node* next;
);
// inserts a new node on the front of the list.

void push(Node** head_ref, int new_data)
{
    // creating new_Node in front
    Node* new_node = new Node()  // created new node
    new_node -> data = new_data;  // new_node ka jo data hai vo new_data
    new_node -> next = (*head_ref);  //new_node ko head k sath jod diya hai
    (*head_ref) = new_node    //  new_node ko head kar diya ab new_node hi head ho gaya apna

}

// Given a reference (pointer to pointer) to the head of a list and a key, deletes the first occurrence of key in linked list

void deleNode(Node** head_ref, int key)
{
    // store head node
    Node* temp = *head_ref;
    Node* prev = NULL;
    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->data == key){
    
    // CHANGED HEAD
       *head_ref = temp->next;
    // free old head
       delete temp;
       return;
    
    }
    // Else Search for the key to be deleted, keep track of the previous node as we need to change 'prev->next'
    else {
        while (temp != NULL && temp->data != key) {
            prev = temp;   // prev on temp
            temp = temp -> next;   // temp ko ek ek se aagey bhi badhana 
 
        }

        // if key element is not present in the linked list
        if (temp == NULL)     // hain he nhi toh kya del karege vahi return kar diya
           return;

        // Unlink the node from linked list
        prev->next = temp->next;

        // Free memory
        delete temp;

        
    }
}

// This function prints contents of
// linked list starting from the
// given node
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}
 
// Driver code
int main()
{
 
    // Start with the empty list
    Node* head = NULL;
 
    // Add elements in linked list
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
 
    puts("Created Linked List: ");
    printList(head);
 
    deleteNode(&head, 1);
    puts("\nLinked List after Deletion of 1: ");
 
    printList(head);
 
    return 0;
}