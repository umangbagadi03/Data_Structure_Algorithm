// print non repeating elemnt in c++

/*We can use the XOR operation to solve this problem. The XOR operation has a property such that if you XOR a number
with itself, the answer becomes zero. So, we can do the XOR of all the elements in the array one by one, and then the 
final result would be our number that occurs once in the array.
Let’s use an example to understand this better. Suppose the array contains [1, 1, 3, 2, 4, 2, 3]. 

Now, we follow the steps below.
1.Initialize the XOR result as 0 (result = 0).
2.Pick one element from the array and perform the XOR of that element with result.
3.Continue the steps above until all the elements in that array are processed.
4.At the end, the result will contain the number that occurs once in the array.
*/

#include<iostream>
using namespace std;

int main() {
  int arr[] = {1,1,3,2,4,2,3};
  int size = sizeof(arr)/sizeof(int);
 
  int result = 0;
  for(int i =0 ; i < size; i++)
    result = result ^ arr[i];
  
  cout << "Number occurs once: " << result;


  return 0;

}


   
