// move negative number in one side of array

/*
Explanation for Move all Negative Numbers to Beginning and Positive to End
We are given an array of integer, and the array is containing the positive and negative elements. We have asked to shift all the negative elements to the left and the positive numbers to the right. For this, we are going to swap all the numbers, which are positive and negative elements. Traverse the array first and then check for the negative numbers, if the number is negative then only we will go for swapping the values.

Set the value of j to 0, it will be used for the alternative value to swap with. We will start traversing the array and check for each number as arr[i] is less than 0, if it is less than 0, means we found the negative number, and therefore we will check for if both of the indexes are not same, is all of the above conditions are true, then we will swap the numbers as arr[i] and arr[j] will be swapped, and increase the value of j. we will keep that traversal going on till all the possible values have been traversed and swapped and rearranged according to the given condition.

We have checked that condition that arr[i] is less than 0 because we are just arranging the negative numbers, all negative numbers after swapping will be arranged to the left of the array, and all other positive numbers will be arranged automatically to the right of the array. After all the swapping we have done, we just need to print the array in which the swapping operations performed.
*/

#include<iostream>
using namespace std;

void shiftingIntegers(int arr[], int N) {
    int j = 0;    // j 
    for (int i = 0; i < n; i++) {
        if (arr[i] < o) {    // i ko traverse kar rhe agr zero se kam kahi milta toh usko swap kar lenge j k sath jo apn n oth index pe rakh hai aur phir j ko ++ kar lenge , phir next i or koi chota mila toh j k sath swap and then aur j ko aagey badha denge
            if (i != j)      // checking if both index are similra or what
                swap(arr[i], arr[j]);   // then finally swapping
            j++;   // jo badha n padega index quke apn jo negative encounter hua tha usko swap kar diya
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
}

int main() {
    // initialize array 
    int arr = {1,4,7,-3,5,-2,-9,-4};
    int N = sizeof(arr) / sizeof(arr[0]);
    
    // calling function
    shiftIntegers(arr, n);

    return 0;
}