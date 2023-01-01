#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 110;
    
    int ans = linearSearch(arr, n, x);
    
    if (ans == -1) {
        cout << "Element is not present in array";
    }
    else {
        cout << "Element is present at index " << ans;
    }

    return 0;
}
