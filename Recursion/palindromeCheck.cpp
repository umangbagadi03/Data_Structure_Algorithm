// to check palindrome in string

#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j) {  

    // base case
    if(i>j)
        return false;
    else {
        // recursive call 
        return checkPalindrome(STR,i+1,j-1);
    }
}

int main() {

    string name = "bookkoob";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome) {
        cout << "Its a palindrome " << endl;
    }
    else {
        cout << "Its not a palindrome" << endl;
    }
}