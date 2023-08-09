#include<iostream>
#include<vector>

using namespace std;

int partition(int arr[], int s, int e) {
    // Step 1: Select the pivot element
    int pivotIndex = s;
    int pivot = arr[s];

    // Step 2: Find the correct place of the pivot element
    int count = 0;
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // Place the pivot in its correct position
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // Step 3: Create the partition so that left elements are smaller than pivot and right elements are greater than pivot
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex) {
        // Move i to the right until it points to an element greater than pivot
        while (arr[i] <= pivot)
            i++;
        
        // Move j to the left until it points to an element smaller or equal to pivot
        while (arr[j] > pivot)
            j--;

        // Swap elements if i is behind pivotIndex and j is ahead of pivotIndex
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex; // Return the index of the pivot element after partitioning
}

void quickSort(int arr[],int s,int e){
    // Base case
    if(s >= e) // s == e is single element which is already sorted and s > e is invalid array
        return;
    // Partition Logic
    int p = partition(arr,s,e);
    // Recursion Logic
    // Call for left array
    quickSort(arr,s,p-1);
    // Call for right array
    quickSort(arr,p+1,e);
}

int main(){
    int arr[] = {38,27,43,3,9,20};
    int n = 6;
    int s = 0;
    int e = n - 1;
    quickSort(arr,s,e);
    for(int i = 0; i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
