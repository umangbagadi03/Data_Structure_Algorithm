// Even Number of Digits

// Given an array of integers, find the elements which have an even number of digits.

#include <iostream>
#include <vector>

using namespace std;

vector<int> getEvenDigitNumbers(vector<int> &arr) {
    int n = arr.size();
    vector<int> evenDigitNumbers;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenDigitNumbers.push_back(arr[i]);
        }
    }

    return evenDigitNumbers;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vector<int> evenDigitNumbers = getEvenDigitNumbers(arr);

    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    cout << "\nEven-Indexed Numbers: ";
    for (int num : evenDigitNumbers) {
        cout << num << " ";
    }

    return 0;
}
