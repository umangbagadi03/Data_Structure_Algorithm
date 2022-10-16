// Demonstrating how new & delete operators work

#include<iostream>
using namespace std;

int main() {
    int *ptr = NULL;    // POINTER INITIALIZED WITH NULL
    ptr = new int;     // request memory for variable
    *ptr = 12345;   // storing value at allocated address
    cout << "Value of Pointer Variable *ptr : " << *ptr << endl;
    delete ptr;
    return 0;   // free up the memory

}