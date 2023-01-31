#include<iostream>
using namespace std;

int main() {
    // hollow rectangle
    for(int row = 0; row < 3; row = row + 1){  // alway outer loop is for rows
        // in first and last row we have to print all 5 star
        if(row == 0 || row == 2) {
            for(int col = 0; col < 5; col++){
                cout << "* ";
            }
        }
        else {
            // remaining middle rows
            // first star
            cout << "* ";
            // spaces
            for(int i = 0; i < 3; i = i + 1){
                cout << "* ";
            }
            // last star
            cout << endl;
        }
    }
}