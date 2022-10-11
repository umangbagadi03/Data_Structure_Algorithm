#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack, int count, int size) {  // size
    //base case

    if(count == size/2) {  // jab middle mil gaya tab pop kardo
        inputStack.pop();
        return ;
    }

    int num = inputStack.top();   // top wala nikal rhe jab tak middle wala nhi mil jata tab tak har isme top wala ekk nikl rhe
    inputStack.pop();   // top wala nikal rhe

    // RECURSIVE CALL
    solve(inputStack, count+1, size);   // count aagey badha rhe quke first nikal m k bad ab second nikalna haijab tak middle tak nhi aajtae nikaloe nikate tab tak top wala har bat hata na hai    
    inputStack.push(num);  // ab apneko mil gaya middle ka so jo apn upar k hataya the ek ek karke middle me ane tak k vo sab wapis dal rhe num jo the

}

void deleteMiddle(stack<int>&inputStack, int N) {    // middle jo mila usse delete kiya

    int count = 0;
    solve(inputStack, count, N);
}
