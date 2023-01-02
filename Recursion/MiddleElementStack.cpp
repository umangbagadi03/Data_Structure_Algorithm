/*
Store the stack size in a variable sizeofstack and a variable current to track the current size of stack.
Recursively pop out the elements of the stack
Pop the element from the stack and increment current by one then recur for the remaining stack.
The base case would be when the current becomes equal to sizeofstack / 2 then pop the top element.
Push the element that was popped before the recursive call. 
*/

#include <iostream>
#include <stack>
using namespace std;

// Deletes middle of stack of size
// n. Curr is current item number
void deleteMiddleElement(stack<char> s, int sizeOfStack, int current) {
    //if current pointer is half of the size of stack then we
    //are accessing the middle element of stack.

    // base case
    if(current == sizeOfStack/2) {
        s.pop();
        return ;
    }
    //storing the top element in a variable and popping it
    int x = s.top();
    s.pop();
    current += 1;

    //calling the function recursively.
    deleteMiddleElement(s,sizeOfStack,current);
    //pushing the elements (except middle element) back
    //into stack after recursion calls.
    s.push(x);
}

void deleteMid(stack<char>& s, int sizeOfStack)
{
    deleteMiddleElement(s, sizeOfStack, 0);
}

int main() {
    stack<char> st;

    //push elements into the stack
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st.push('5');
    st.push('6');
    st.push('7');

    deleteMid(st, st.size());

    // Printing stack after deletion
    // of middle.
    while (!st.empty())
    {
        char p=st.top();
        st.pop();
        cout << p << " ";
    }
    return 0;
}