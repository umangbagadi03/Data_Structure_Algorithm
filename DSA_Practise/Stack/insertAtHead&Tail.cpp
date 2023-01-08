// insert elemnt at head in linked list

#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;   // node nam ka pointer hai next ko point pr

    // constructor   
    Node(int data) {
        this -> data = data;   // jab bhi koi linkedlist initilize hoge this ka next data, this ka next null hoga
        this -> next = NULL;  // matlab ki jo bhi linked list initialize hoge uska data next data hoaga aur uska next null hoga
    }
};

void insertAtHead(Node* &head, int d) {   // refrence of head added

    // new node create
    Node* temp = new Node(d);   //  node hai jisko add krna hai head pe abhi temp point krra usse
    temp -> next = head;    // jo ye node hai usko temp point krra vo temp k next ko head k sath point kar diya // ab bhai head kya hai head ye apne linked list ka abhi ak jo head hai usko point krra
    head = temp;    // matlab ab temp ko head hai matlab apna temp jo linked list te vo linked ho gaye apne main list k sath  aur ab jo naya head hai vo temp hai
}

void inserAtTail(Node* &tail, int d) {
    // new node create to insert at tail
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* & head, int position, int d) {
    // insert at start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }
}

void print(Node* &head) {
    Node* temp = head;    // node ponter temp pe

    while(temp != NULL) {      // ab apneko insert krne k bad pure linked list print krna hai  // jab tak temp null nhi hota tab tak linked list print katrga ye loop lagay apne quke pure linked list print krna hai n
        cout << temp -> data <<" ";   
        temp = temp -> next;
    }
    cout << endl;
}



int main() {
    Node* node1 = new Node(10);
    Node* node2 = new Node(5);
    Node* node3 = new Node(8);
    Node* node4 = new Node(2);
    Node* node5 = new Node(20);
    cout << node1 -> data << endl;
    cout << node2 -> data << endl;
    cout << node3 -> data << endl;
    cout << node4 -> data << endl;
    cout << node5 -> data << endl;
    cout << node5 -> next << endl;
    
    Node* head = NULL;     // initialize head to null
    // insert at head
    insertAtHead(head, 40);   // call kiya insert head function ko
    print(head);

    // insert at tail
    insertAtTail(tail, 22);
    



    return 0;

}
