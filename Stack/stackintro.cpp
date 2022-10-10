#include<iostream>
#include<stack>
using namespace std;

class stack { // class
    // properties

    int *arr;
    int top;
    int size;

    // constructor
    stack(int size) {   // ye jo upar int size hai uske hi parameter
        this -> size = size;
        arr = new int(size);
        top = -1;    // top=-1 matalb apn n isse khali intialize kar diya
        
    }

    void push(int element) { // push
        if(size - top>1) {   // atleast 1 toh bhi khali jagh rhna chaiye tabhi apn naya kuch push karenge n
            top++;   // push
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<< endl;   // khali hai hi nhi toh stack overflow
        }
    }

    void pop() {
        if(top>=0) {   // kuch usme rhega tabhi pop karenga n isley >=0 MATALB TOP ME ATLEAST 1 TOH RHE
            cout << " stack underflow" << endl;
        }

    }
    int peek() {   // upar se top wala elemnt
        if(top>=0 && top<size)
            return arr[top];
        else 
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty() {  // empty hai ya nhi check krna hai apneko
        if ( top == -1) {   // top == -1 hai toh apna stack empty return -1
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {


    stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty mere dost " << endl;
    }
    else{
        cout << "Stack is not Empty mere dost " << endl;
    }
     return 0;
}
