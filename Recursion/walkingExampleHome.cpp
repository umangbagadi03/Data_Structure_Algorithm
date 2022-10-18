#include<iostream>
using namespace std;


// destination -- apna ghar jaha jana hai apneko
void reachHome(int curr_loc, int destination) {

    // base case
    if(curr_loc == destination) {

        cout << "poch gaya ghar" << endl;
        return ;
    }
    // processsing ekk step aagey badh jao
    curr_loc++;

    // recursive call
    reachHome(curr_loc, destination);
}

int main( ) {
    int destination = 40;
    int curr_loc = 1;

    cout << endl;

    reachHome(curr_loc, destination);

    return 0;
}