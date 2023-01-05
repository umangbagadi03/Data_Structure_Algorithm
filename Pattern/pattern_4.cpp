#include<iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;
    
    int row = 1;   // for outer loop we are 
    
    while(row <= n) {
        
        int col = 1;
        int value = row;
        
        while(col <= row) {
            cout << value;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
    
}