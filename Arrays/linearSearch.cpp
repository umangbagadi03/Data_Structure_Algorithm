// linear serach in cpp

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for (int i = 0; i< size; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;

}

int main() {
    // initialize array
    int arr[10] = {11,22,33,44,55,66,77,88,99,109}

    cout << " Enter the elemnt you want to search:" << endl;
    // variable to get key 
    int key;

    // taking input from user for the key he want to search
    cin >> key;

    // calling bool
    bool found = search(arr,10,key);

    if (found) {
        cout << " key elemnt is present" << endl;
    }

    else {
        cout << " key elemnt is absent " << endl;
    }


    return 0;
}