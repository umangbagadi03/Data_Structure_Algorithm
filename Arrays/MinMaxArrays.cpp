#include <iostream>
#include <limits.h>
using namespace std;

// Function to find the minimum value in an array
int minArray(int arr[], int n) {
    int minVal = INT_MAX;  // Initialize minVal with a large value

    // Loop through the array elements
    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];  // Update minVal if a smaller value is found
        }
    }
    return minVal;  // Return the minimum value
}

// Function to find the maximum value in an array
int maxArray(int arr[], int n) {
    int maxVal = INT_MIN;  // Initialize maxVal with a small value

    // Loop through the array elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];  // Update maxVal if a larger value is found
        }
    }
    return maxVal;  // Return the maximum value
}

int main() {
    int n;  // Declare n to store the array size
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declare the array after knowing its size
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input array elements
    }

    int minValue = minArray(arr, n);  // Call the function to find minimum
    int maxValue = maxArray(arr, n);  // Call the function to find maximum

    cout << "Min value in Array: " << minValue << endl;
    cout << "Max value in Array: " << maxValue << endl;

    return 0;  // Return 0 to indicate successful completion
}
