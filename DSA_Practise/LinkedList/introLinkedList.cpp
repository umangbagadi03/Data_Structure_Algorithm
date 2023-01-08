#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this -> data = data;   // jab bhi koi linkedlist initilize hoge this ka next data, this ka next null hoga
        this -> next = NULL;  // matlab ki jo bhi linked list initialize hoge uska data next data hoaga aur uska next null hoga
    }
};

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

    return 0;

}