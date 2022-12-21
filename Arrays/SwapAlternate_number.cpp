// to swap alternate numbers in array in c++

#include<iostream>
using namespace std;

// function to print aaray
void printArray(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";

    }cout << endl;
}

// function to swap alternate numbers
void swapAlternate(int arr[], int size) {
    for(int i=0; i<size; i+=2) {
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main() {

    // intializing array
    arr1[4] = {22,34,56,77}; // even array
    arr2[5] = {44,65,43,78,41};  // odd array




    return 0;
}