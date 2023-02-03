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

