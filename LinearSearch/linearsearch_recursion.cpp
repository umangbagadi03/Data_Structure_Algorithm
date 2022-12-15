// recursion in linear search

#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    // base case
    if (size == 0){
        return false;  // if no elemnt 
    }

    if (arr[0] == key){
        return true;
    }
    else {
        bool remainingPart = linearSearch(arr+1, size-1, key);
        return remainingPart;
    }
}


int main() {
    int arr[5] = {3,5,6,4,9};  // arr of size 5
    int size = 5;
    int key = 5;
    bool ans = linearSearch( arr,  size, key);

    if (ans) {
        cout << "Present" << endl;
    }
    else {
        cout << "Not Present" << endl;
    }
    return 0;
};