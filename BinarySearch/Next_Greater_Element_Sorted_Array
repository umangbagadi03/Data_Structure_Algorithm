/*
Next Greater Element In Sorted Array

Given a sorted array and a number key, find the smallest array element which is greater than the key.

If the key is greater than or equal to the largest element then return the key itself.
*/

#include <iostream>
#include <vector>

using namespace std;

int getNextGreaterElement(vector<int> &arr, int key) {
    int s = 0;                    // Start of the search range
    int e = arr.size() - 1;       // End of the search range

    while (s <= e) {              // Binary search loop
        int mid = s + (e - s) / 2; // Calculate the middle index

        if (arr[mid] <= key) {
            s = mid + 1;           // If mid element is not greater than key, move the search range to the right
        } else {
            e = mid - 1;           // If mid element is greater than key, move the search range to the left
        }
    }

    if (s < arr.size()) {
        return arr[s];            // Return the smallest element greater than key
    } else {
        return key;               // If key is greater than or equal to the largest element, return key itself
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 8};
    int key = 5;
    int result = getNextGreaterElement(arr, key);
    cout << "Smallest element greater than " << key << ": " << result << endl;

    return 0;
}
