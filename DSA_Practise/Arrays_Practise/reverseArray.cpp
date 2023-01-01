// reverse an array 
#include<iostream>
using namespace std;

// function to reverse arr[] from start to end 
void reverseArray(int arr[], int start, int end) {   // 2 pointer laga diye ekk start me aur ekk end me 
    while (start < end) {    // kab tak krna hai jab tak start end se chota hai tab tak
        int temp = arr[start];    // start wala temp me store kar liya matlab start me abhi kuch nhi hai
        arr[start] = arr[end];    // ab start=end kiya matlab end wala start me aagya
        arr[end] = int temp;      // aur jo start wala temp me dala tha vo ab end me dal diya

        start ++;    // phir start wala seconf=d pe jayega 
        end --;     // aur ye second last pe ye dono swap hoge phir
        // ye jab tak hoga jab tak start chota hai end se
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    cout << arr[i] << " " ;

    cout << endl;
}

int main() {

    // initialize array
    int arr = {1,2,3,4,5,6,7,8}
    int n = sizeof(arr) / sizeof(arr[0]);

    // print original array
    printArray(arr, n);

    // function calling
    reverseArray(arr, 0, n-1);

    cout << "Reversed array is" << endl;

    // to print reverse array
    printArray(arr, n);

    return 0;


}

// ARTICLE LINK - https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
