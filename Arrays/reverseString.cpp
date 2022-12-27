// reverse string in cpp

#include<iostream>
using namespace std;

void reverse(char name[], int n) {
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int main( ) {

    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    //name[2] = '\0';
    cout << "Your name is ";
    cout << name << endl;
    
    reverse(name, len);
    cout << "Your name is ";
    cout << name << endl;
    

   string s;
   cin >> s;


    return 0;
}