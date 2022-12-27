// palindrome in string cpp

#include<iostream> 
using namespace std;

char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(toLowerCase( a[s] ) != toLowerCase( a[e] ) )
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}


int main( ) {

    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    //name[2] = '\0';
    cout << "Your name is ";
    cout << name << endl;
    cout <<" Palindrome or Not: " << checkPalindrome(name, len) << endl;
    cout << " CHARACTER is " << toLowerCase('b') << endl;
    cout << " CHARACTER is " << toLowerCase('C') << endl;
    

   string s;
   cin >> s;

    return 0;
}