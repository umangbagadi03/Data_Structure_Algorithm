#include<iostream>
using namespace std;

int main() {
    // outer for loop is for rows which will print rows
    for(row = 0, row < 3, row = row++){
        // inner for loop for col  which will peint col
        for(col = 0, col < 5, col = col++) {
            cout << "* ";
        }
        cout << endl;
    }
}