// intro to doubly linked list 

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor 
    Node(int d) {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~Node() {
       int val = this -> data;
       if(next != NULL) {
           delete next;
           next = NULL;
       }
       cout << "memory free for node with data "<< val << endl;
    }
};

void print(Node* head, Node* tail) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data;
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &tail, Node* &head, int d) {

    // empty list
    if(head == NULL) {
        Node* temp = new Node(d);   // naya bnaya linked list
        head = temp;      // head aur tail dono temp pe hai
        tail = temp;
    }

    else {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail, Node* &head, int d) {
    // if list is empty
    if(tail == NULL) {
        Node* temp = new Node(d);    // node* pointer hai ekk temp pe
        tail = temp;
        head = temp;
    }
    else {
        Node* temp = new Node(d); 
        tail -> next = temp;   // tail ka next temp mtlb jo linked list add krna hai last me vo link krdena
        temp -> prev = tail;   // temp ka jo prev hai vo tail ko link hoga quke ye doubly linked list hai
        tail = temp;     // ab naya tail kya hai temp
    }

}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    // insert at start
    if(position == 1) {
        insertAtHead(tail, head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;   // traverse kar rhe apn 

    while(cnt < position - 1) {   // jab tak vo position pe nhi jayenge
        temp = temp -> next;   // temp ko aagey badha rhe
        cnt++;    // ++
    }

    // inserting at last position
    if(temp -> next == NULL) {   // last wala
        insertAtTail(tail, head, d);
        return ;
    }

    // creating node for d
    Node* nodeToInsert = new Node(d);   // nodeToInsert apn jo naye node add kr rhe vo

    nodeToInsert ->next = temp -> next;    // nodeto insert ka jo next hai vo temp k next ko point karega // temp kya hai jaha apneko insert krna hai uske k pahle k node hai // abhi temp k next me bhi ekk node hai uske pahle apneko add nodeto insert
    temp -> next -> prev = nodeToInsert;   // temp ka next hai uske prev ab node to insert ko point karega 
    temp -> next = nodeToInsert;  // temp ka next nodetoinsert ko karega
    nodeToInsert -> prev = temp;  // aur nodetoinsert ka prev hai vo temp ko point karega 
}

void deleteNode(int position, Node* & head) {
    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }

}

// main function
int main () {
    Node* head = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);
    Node* tail = head; // define tail and initialize it to head

    head->next = node2;
    node2->prev = head;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = node5;
    node5->prev = node4;

    // print the list
    print(head, tail); // pass both head and tail as arguments

    // to insert in linked list
    insertAtHead(tail, head, 8);
    print(head, tail); // pass both head and tail as arguments
    cout << "head " << head -> data << endl;

    // insert at tail
    insertAtTail(tail, head, 10);
    print(head, tail); // pass both head and tail as arguments
    cout << "tail " << tail -> data << endl;

     insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteNode(7, head);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    
}
  