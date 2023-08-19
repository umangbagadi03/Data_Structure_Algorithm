// The cumulative sum of an array at index i is defined as the sum of all elements of the array from index 0 to index i

#include <iostream>
#include <vector>

vector<int> getCumulativeSum(vector<int> &arr) {
	// add your logic here
	int n = arr.size();
    vector<int> cumulativeSum(n);
	
	cumulativeSum[0] = arr[0];
	
	for(int i = 0; i < n; i++){
		cumulativeSum[i] = cumulativeSum[i-1] + arr[i];
	}
	return cumulativeSum;

}
