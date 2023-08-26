/*

Given an array and a number k, find the sum of the subarray that has the maximum sum among all the subarrays of size k.

Example
Array: [3, 5, 6, 2, 4, 7, 8]
k: 3
Here, the subarrays of size k and their sum are:
[3 5 6] => 14
[5 6 2] => 13
[6 2 4] => 12
[2 4 7] => 13
[4 7 8] => 19
Answer: 19

*/
#include <iostream>
#include <vector>

using namespace std;
int maxKSubarraySum(vector<int> &A, int k) {
    int n = A.size();
    
    if (n < k) {
        return -1;
    }
    
    int maxSum = 0;
    int currentSum = 0;
    
    for (int i = 0; i < k; i++) {
        currentSum = currentSum + A[i];
    }
    
    maxSum = currentSum;
    
    for (int i = k; i < n; i++) {
        currentSum = currentSum - A[i] + A[i - k];
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
}

int main() {
    vector<int> arr = {3, 5, 6, 2, 4, 7, 8};
    int k = 3;
    
    int result = maxKSubarraySum(arr, k);
    cout << "Maximum subarray sum of size " << k << " is: " << result << endl; // Output: 19
    
    return 0;
}
