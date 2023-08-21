// Given an array and a number k, remove all occurrences of k from the array (in-place). Return the number of elements 'remainingSize' left after removing k. Note that removing the occurences is mandatory and will be checked in the main method. There can be anything beyond the first 'remainingSize' elements. It will be ignored.

#include <iostream>
#include <vector>

using namespace std;

int removeOccurences(vector<int> &A, int k) {
	int n = A.size();
	
	vector<int> updatedList;

	
	for(int i=0; i<n; i++){
		if(A[i] != k){
			updatedList.push_back(A[i]);
		}
	}
	
	int m = updatedList.size();
	int count = 0;
	
	for(int i=0; i<m; i++){
		count++;
	}
	
	return count;

}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 3, 5, 3};
    int valueToRemove = 3;

    int remainingCount = removeOccurrences(numbers, valueToRemove);
    cout << "Remaining count: " << remainingCount << endl;

    return 0;
}
