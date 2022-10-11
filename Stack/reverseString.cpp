


#include<iostream>
#include<stack>   // including stack
using namespace std;

int main() {
    string str = "umang";

    stack <char> s;  // stack ko s nam de diya
    for (int i=0 ; i<str.length(); i++) {   // pushing string umang into stack s  ekk ekk kar kar push krte jaa rhe isme apn
        char ch = str[i];
        s.push(ch);  // push character
    }

    string ans = "";  // ye ekkk bna liya apn n isme dalege reverse strink ko
    
    // poping out from stack intp string ans as we know in stack there is last in first out so last inserted chr in string will be popped out
    while(!s.empty()) {   // kab tak chala rhe loop jab tak pura stack empty nhi hote
        char ch = s.top();  // top wala stack me se liye apne isme g hoga        ans.push_back(ch);

        s.pop(); // pop

    }

    cout << "answer is: " << ans << endl;   // ans me print hoga ye 

    return;
}

