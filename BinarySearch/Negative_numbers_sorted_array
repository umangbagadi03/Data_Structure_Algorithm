
Given a sorted array of integers, find the number of negative numbers.

Expected Time Complexity: O(log n)

Examples
Array: [-5, -3, -2, 3, 4, 6, 7, 8]
Answer: 3
Array: [0, 1, 2, 3, 4, 6, 7, 8]
Answer: 0


#include <iostream>
#include <vector>
using namespace std;

int countNegativeNumbers(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < 0) {
            if (mid == 0 || arr[mid - 1] >= 0) {
                // If mid is the first negative element or the previous element is non-negative
                return arr.size() - mid; // Number of negative elements = Total elements - Index of first negative element
            }
            right = mid - 1; // Continue searching in the left half
        } else {
            left = mid + 1; // Continue searching in the right half
        }
    }

    return 0; // No negative elements found
}

int main() {
    vector<int> arr1 = {-5, -3, -2, 3, 4, 6, 7, 8};
    cout << "Number of negative elements in arr1: " << countNegativeNumbers(arr1) << endl;

    vector<int> arr2 = {0, 1, 2, 3, 4, 6, 7, 8};
    cout << "Number of negative elements in arr2: " << countNegativeNumbers(arr2) << endl;

    return 0;
}
