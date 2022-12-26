// merge 2 sorted arrays

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, inr arr2[], int m, int arr3[]) {
    int i = 0, j = 0;
    int k = 0;
    while (i < n, && j < m) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i]
            j++;
            k++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    // code to copy first array elemnt
    while(i<n) {
        arr3[k] = arr[i];
        i++;
        k++;
    }

    // code to copy second array elemnt
    while(j<m) {
        arr3[k] = arr[j];
        j++;
        k++;
    }

    // function to print
    void print(int ans[], int n) {
        for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;

    }
}



int main() {

    // initialize arrays to be merged
    int arr1[5] = {1,2,4,6,7};
    int arr2[3] = {3,5,8}

    int arr3[8] = {0};

    merge(arr1, 5 , arr2, 3, arr3);  // calling merge fun

    print(arr3, 8);   // calling print func\

    return 0;
}