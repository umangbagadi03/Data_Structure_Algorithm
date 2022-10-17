// factorial using recursion

#include<iostream>
using namespace std;

int factorial(int n) {

    // base class - 
    if(n==0)
        return 1;

    int chote_problem = factorial(n-1);
    int bade_problem = n * chote_problem;

    return bade_problem;
}



int main() {

    int n ;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;

    return 0;
}