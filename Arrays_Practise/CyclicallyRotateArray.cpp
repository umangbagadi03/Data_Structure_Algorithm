// cyclically Rotate array in cpp

/*This C++ program demonstrates how to rotate an array by one position. The program defines a function rotate() that takes an array arr and its size n as arguments.

Inside the function, the last element of the array is saved in a variable x, and then a loop iterates over the elements of the array in reverse order. For each iteration, the current element is replaced with the previous element, until the first element is reached. Finally, the value of x is assigned to the first element of the array.

The main() function then initializes an array arr with some values and prints it to the console. It then calls the rotate() function to rotate the array by one position and prints the rotated array to the console.*/

# include <iostream>
using namespace std;
 
void rotate(int arr[], int n) {
    int x = arr[n-1],i ;
    for (i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = x;

    }
}

int main () [

    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) /
            sizeof(arr[0]);

    cout << "Given array is \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';

    rotate(arr, n);
 
    cout << "\nRotated array is\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';
 
    return 0;
}
 
