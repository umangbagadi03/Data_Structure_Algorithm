/*
Consider arr[] = {3, 4, 5, 1, 2}, key = 1

Pivot finding:

low = 0, high = 4:
        =>  mid = 2
        =>  arr[mid] = 5, arr[mid + 1] = 1
        => arr[mid] > arr[mid +1],
        => Therefore the pivot = mid = 2

Array is divided into two parts {3, 4, 5}, {1, 2}
Now  according to the conditions and the key, we need to find in the part {1, 2} 

Key Finding:

We will apply Binary search on {1, 2}. 
low = 3 , high = 4.
            =>  mid = 3
            =>  arr[mid] = 1 , key = 1, hence arr[mid] = key matches.
            =>  The required index = mid = 3

So the element is  found at index 3.
*/




#include <bits/stdc++.h>
using namespace std;
 
// Recursive binary search function to find the index of the target key within a given range
int binarySearch(int arr[], int s, int e, int key) {
    if (e < s)
        return -1;

    int mid = (s + e) / 2;
    
    if (key == arr[mid])
        return mid;

    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), e, key);
    else
        return binarySearch(arr, s, (mid - 1), key);
}

// Function to find the pivot point (index of rotation) in the rotated sorted array
int findPivot(int arr[], int s, int e) {
    // Base cases
    if (e < s)
        return -1;

    if (e == s)
        return s;

    // Calculate the middle index
    int mid = (s + e) / 2;

    // Check if the middle element is greater than the next element
    if (mid < e && arr[mid] > arr[mid + 1])
        return mid;

    // Check if the middle element is smaller than the previous element
    if (mid > s && arr[mid] < arr[mid - 1])
        return (mid - 1);

    // If the leftmost element is greater than or equal to the middle element,
    // then the pivot must be on the left side
    if (arr[s] >= arr[mid])
        return findPivot(arr, s, mid - 1);

    // Otherwise, the pivot must be on the right side
    return findPivot(arr, mid + 1, e);
}

// Function to perform a pivoted binary search in a rotated sorted array
int pivotedBinarySearch(int arr[], int n, int key) {
    // Find the pivot index
    int pivot = findPivot(arr, 0, n - 1);

    // If no pivot was found, perform a regular binary search
    if (pivot == -1)
        return binarySearch(arr, 0, n - 1, key);

    // If the pivot is the target key, return the pivot index
    if (arr[pivot] == key)
        return pivot;

    // If the target key is greater than the first element,
    // search in the left subarray (before the pivot)
    if (arr[0] <= key)
        return binarySearch(arr, 0, pivot - 1, key);
    
    // Otherwise, search in the right subarray (after the pivot)
    return binarySearch(arr, pivot + 1, n - 1, key);
}
int main()
{
    // Let us search 3 in below array
    int arr1[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int key = 3;
 
    // Function calling
    cout << "Index of the element is : "
         << pivotedBinarySearch(arr1, n, key);
 
    return 0;
}
