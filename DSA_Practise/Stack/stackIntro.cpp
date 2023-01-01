// stack intro in cpp

#include<iostream>
#include<stack>
using namespace std;

class stack {
    // properties
    public:
        int *arr;
        int top;
        int size;

    // constructor
    stack(int size) {   // stack mere parameter uske size
        this -> size = size;
        arr = new int[size];
        top = -1;
    
    }
    void push(int element) {   // push function
        if (size - top > 1) {   // isme se pta chlta atleast ekk toh elment khali hai apne isme total size me se top ko minus kiya toh kam se kam ekk toh khli chaiye tab hi push hoga n
            top ++;     // top ko ++ karenge add karenge toh aage badhega n top
            arr[top] = element;      // top k jagh pr elemnt copy kar liya
        }
        else {
            cout << " Stack overflow" << endl;
        }
    }

    void push(int element) {
        if (size - top > 1) {   /// kuch toh rhma chaiye n elemnt pop krne k liye isley chck ka rrhe
            top ++;
            arr[top] = element;
        }
        else {
            cout << "Stack overflow" << endl;
        }
    }

    void pop() {
        if(top <=0 ) {    // quke top = -1 hogaya toh iska matlab empty hai toh kya hi pop karenge
            top -- ;    // aur top --

        }
        else {
            cout << " Stack overflow" << endl;
        }
    }
    int peek() {
        if (top >= 0) {   // isme top ka elemnt return krte
            return arr[top];

        }
        else {
            cout << "Stack is Empty" << endl;
            return -1 ;

        }
    }
    bool isEmpty() {
        if (top == -1) {   // kabhi yad rakhna ki top = -1 rha matlab empty hai
            return true;   
        }
        else {
            return false;
        }
    }
};
int main() {


    Stack st(5);

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


