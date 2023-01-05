#include<iostream>
using namespace std;

int main() {
    int row = 1;
    int n;  
    cin >> n;      

    while(row <= n) {
        int col = 1;        

        while (col <= n) {
            char ch = 'A' + row - 1;
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}