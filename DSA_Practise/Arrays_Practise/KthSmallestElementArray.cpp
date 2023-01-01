// to find k th smallest elemnt in array  which is is unsorted

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int N, int k) {
    // as it is unsorted need to sort it first

    sort(arr, arr + N);   // sorting

    // Return kth elemnt in the sorted array
    return arr[k-1];
}

// function to return kth smallest elemnt in given array


int main() {

    // INITALIZING aaray
    int arr = {1,4,8,2,6,9};
    int N = sizeof(arr) / sizeof(arr[0]);
 
    int k;

    cin >> k;

     // Function call
    cout << "K'th smallest element is "
         << kthSmallest(arr, N, K);
    return 0;
}
