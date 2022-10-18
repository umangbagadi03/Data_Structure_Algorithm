// power 

#include<iostream>
using namespace std;

int power(int n) {

    // base case
    if(n == 0)
    return 1;

    // recursive relation
    int smallerProblem = power(n-1);
    int biggerProblem = smallerProblem;

    return biggerProblem;
}


int amin(){
    int n;
    cin>>n;

    int ans = power(n);

    cout << ans << endl;

    return 0;

}