// reverse an array
#include<iostream>
using namespace std;

// function to reverse arr[] from start to end 
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = int temp;

        start ++;
        end --;
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    cout << arr[i] << " " ;

    cout << endl;
}

int main() {

    // initialize array
    int arr = {1,2,3,4,5,6,7,8}
    int n = sizeof(arr) / sizeof(arr[0]);

    // print original array
    printArray(arr, n);

    // function calling
    reverseArray(arr, 0, n-1);

    cout << "Reversed array is" << endl;

    // to print reverse array
    printArray(arr, n);

    return 0;


}
