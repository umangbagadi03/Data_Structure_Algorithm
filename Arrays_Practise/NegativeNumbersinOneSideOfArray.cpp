// move negative number in one side of array

#include<iostream>
using namespace std;

void shiftingIntegers(int arr[], int N) {
    int j = 0;    // j 
    for (int i = 0; i < n; i++) {
        if (arr[i] < o) {
            if (i != j) 
                swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
}

int main() {
    // initialize array 
    int arr = {1,4,7,-3,5,-2,-9,-4};
    int N = sizeof(arr) / sizeof(arr[0]);

    shiftIntegers(arr, n);

    return 0;
}