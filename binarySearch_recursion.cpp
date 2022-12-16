// binary searh using recursion

#include<iostream>
using namespace std;



bool binarySearch(int *arr, int s, int e, int k){

    // base case

    // ekement not found
    if(s>e){
        return false;
    }

    // find middle elemnt
    int mid = s + (e + s)/2;

    // ekement found 
    if(arr{mid} == k) {
        return true;
    }

    // right side
    if(arr{mid} < k) {
        return binarySearch(arr, mid+1, e, k);

    }
    // left side
    else {
        return binarySearch(arr, s, mid_1, k);
    }


} 

int main() {
    int arr[6] = {2,4,6,8,10,12};
    int size = 6;
    int key 4;

    cout << "Presnt or Not" << binarySearch(arr, 0, size-1, key) <<endl;

    return 0;
}