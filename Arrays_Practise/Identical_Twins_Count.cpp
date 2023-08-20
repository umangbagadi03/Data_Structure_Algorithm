// Problem Statement -
// For an array of integers nums, an identical twin is defined as pair (i, j) where nums[i] is equal to nums[j] and i < j. Given an array, find the number of identical twins.

#include <iostream>
#include <vector>

using namespace std;

int getIdenticalTwinsCount(vector<int> &arr) {
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4};

    int twinsCount = getIdenticalTwinsCount(arr);

    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    cout << "\nIdentical Twins Count: " << twinsCount;

    return 0;
}
