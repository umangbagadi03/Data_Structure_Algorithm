// cyclically Rotate array in cpp

/*This C++ program demonstrates how to rotate an array by one position. The program defines a function rotate() that takes an array arr and its size n as arguments.

Inside the function, the last element of the array is saved in a variable x, and then a loop iterates over the elements of the array in reverse order. For each iteration, the current element is replaced with the previous element, until the first element is reached. Finally, the value of x is assigned to the first element of the array.

The main() function then initializes an array arr with some values and prints it to the console. It then calls the rotate() function to rotate the array by one position and prints the rotated array to the console.*/

# include <iostream>
using namespace std;
 
void rotate(int arr[], int n) {
    int x = arr[n-1],i ;   // last wala x variable me save kar liya apn n
    for (i = n - 1; i > 0; i--){      // it iterates in reverse order such that each elemnt is replaced by its previous elemnt  second elemnt se lekar last elemnt tak hi hoga ye 
        arr[i] = arr[i - 1];        
    }
    // second se last elemnt tak ka reverse hone k bad x ko le lenge pahle pe wapes
    arr[0] = x;    // baki k reverse krne k bad jo apn n x me sav ekiya tha last wala usko pahle la lenge matlab usko 0 index pe la lenge
    /*The rotate() function takes an array arr and its size n as arguments. It first stores the last element of the array in a variable x. It then iterates over the elements of the array in reverse order, starting from the second-to-last element. For each iteration, the current element is replaced with the previous element.

After the loop finishes, the value of x is assigned to the first element of the array. This effectively rotates the array by one position, with the last element moving to the first position and all the other elements shifting one position to the right.

For example, if the input array is [1, 2, 3, 4, 5], then the function will modify it to become [5, 1, 2, 3, 4].*/
}

int main () {

    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) /
            sizeof(arr[0]);

    cout << "Given array is \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';

    rotate(arr, n);   // calling function
 
    cout << "\nRotated array is\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';
 
    return 0;
}
 
