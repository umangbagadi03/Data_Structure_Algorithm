// top wala side me rakhenge pahle phir baki elemnts ko reverse kar dnege aur first wlae ko bottom me add kardenge

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int element) {  // stack and size
    // base class
    if(s.empty()) {   // empty tab hi toh moka hai push krne ka
        s.push(element);
        return;
    }
    
    int num = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s, element);   // bottomme insert krenge
    s.push(num);     // push
    
}

void reverseStack(stack<int> &stack) {
    // base class
    if(stack.empty()) {   //  jab bhai stack empty hi hai toh kya reyrn kar do 
        return;
    }

    int num = stack.top();    // apneko pahla wala jo top pe hai usse side me rakhna hai abhi phir reverse krna hai bakike isko bottom me daln hai
    stack.pop();   // top se pop kar diya

    // recursive call 
    reverseStack(stack);

    insertAtBottom(stack, num);
}
