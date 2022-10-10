#include<iostream>
#include<stack>
using namespace std;

class TwoStack {
    int *arr;
    int top1;   // top of one stack
    int top2;   // top of another stack
    int size;   // size of stack

public:
    // initilize two stack // constructor
    TwoStack(int s) {
        this -> size = s; // size=s
        top1 = -1;    // top1 mtlb jo pahla stack hai vo usse apn strt se le rhe array k isley -1 rakha hai
        top2 = s;     // top2 ko s rakha hai quke ye piche se strt hora end se se toh iska initial stack k full size rhege isly s liya hai bro
        arr = new int[s];
    }

    // push in stack 1
    void push(int num) {
        // atleast a empty space present 
        if(top2- top1 >0) {   // dono ko minus krne k bad kam se kamekk toh khali jagh rhne chaiye n tab hi apn push kar payege n bro
            top1++;   // aagey lekar jana padega n jaha khali jagh hai waha tak isley ++
            arr[top1] = num;   // top 1 me dal diya num

        }
    }
     // push in stack 2
     void push2(int num){
        if(top2 - top1 > 1 ) {   // same logic
            top2--;    // yaha pe -- karenge queke stack 2 reverse me hai toh apneko peche ana padega n agr kisko push krna hai toh
            arr[top2] = num;
        } 
       
    }
    // pop from stack 1
    int pop1() {
        if ( top1 >= 0) {     // kam se kam kuch toh rhna chaiye pop krne k liye
            int ans = arr[top1];   
            top1--;  // pop out isley minus minus
            return ans;
        }
        else
        {
            return -1;

        }
    }

    // pop from stack 2
     int pop2() {
		if( top2 < size) {
            int ans = arr[top2];
            top2++;   // ye wala piche se strt hora isley pop out k bad isme aagey badhega ++
            return ans;
        }
        else
        {
            return -1;
        }
    }

};