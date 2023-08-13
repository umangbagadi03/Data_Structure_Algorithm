// reverse array in cpp

#include <iostream>
#include <limits.h>
using namespace std;

// Function to reverse an array
void reverse(int arr[], int n) {
    int s = 0;
    int e = n - 1; // Changed 'arr.size()' to 'n'

    while (s <= e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    cout << "Enter elements of the array to be reversed: ";
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the input array
    reverse(arr, n);

    // Print the reversed array
    printArray(arr, n);

    return 0;
}
