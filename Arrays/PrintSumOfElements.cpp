// print sum odf elemnts in array

/*1. Use a for loop
We can use a for loop to traverse the array. All the elements can be added up one by one:

Initialize sum = 0.
Run a for loop from i = 0 to i = size - 1.
At every iteration of the for loop, add sum and the current element of the array, i.e., sum = sum + arr[i].
At the end of the for loop, the sum of all the elements will be stored in the sum variable.
*/

#include<iostream>
using namespace std;

int main(){

    // initialize array
    int arr[] = {12,55,42,78,99,66};
    int size = 6;

    // initialize empty sum
    int sum = 0;

    // for loop runs from index 0 to 4 i.e 0 to n-1

    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];

    }

    cout << "The Sum of all elemnts in array is :" << endl;
    
}