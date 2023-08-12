// merge 2 sorted arrays

#include <iostream>
#include <limits.h>
using namespace std;

// Function to merge two sorted arrays arr1 and arr2 into arr3
void Merge2Arrays(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i = 0, j = 0, k = 0;

    // Compare elements from arr1 and arr2 and merge into arr3
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        } else {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    // If there are remaining elements in arr1, copy them to arr3
    while (i < n) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // If there are remaining elements in arr2, copy them to arr3
    while (j < m) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

// Function to print the elements of an array
void print(int ans[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[5] = {1, 2, 4, 6, 7};
    int arr2[3] = {3, 5, 8};
    int arr3[8] = {0};

    // Merge arr1 and arr2 into arr3
    Merge2Arrays(arr1, 5, arr2, 3, arr3);

    // Print the merged array arr3
    print(arr3, 8);

    return 0;
}
