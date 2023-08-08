#include<iostream>
#include<vector>

using namespace std;

void insertionSort(int n, vector<int> &arr){
    int i, j;
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
                j--;
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {10,20,40,30,50,80,60};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    insertionSort(n, arr);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
