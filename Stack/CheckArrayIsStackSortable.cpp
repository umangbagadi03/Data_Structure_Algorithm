/*
This C++ code defines a function check that takes an array A and its size N as arguments and returns a boolean value indicating whether the array is stack sortable. The function uses a stack to simulate the process of sorting the array, and it returns false if it is not possible to sort the array using a stack. Otherwise, it returns true.

The function first initializes an empty stack and a pointer B_end to the end of the sorted array. It then enters a loop that traverses each element of the array A. Inside the loop, it checks the value at the current element and the top element of the stack. If the stack is not empty, it performs a series of operations that involve comparing the top element of the stack to B_end+1 and popping the top element if they are equal. If the stack is empty or the top element is not equal to B_end+1, it checks if the current element is smaller than the top element of the stack. If it is, it pushes the current element onto the stack. Otherwise, it returns false because it is not possible to sort the array using a stack.

The main function tests the check function with an array A and prints "YES" if the array is stack sortable and "NO" otherwise.
*/


#include <iostream>
#include <stack>
using namespace std;

bool Check(int A[], int N) {
    // stack s
    stack<int>S;
    
    // pointer to end of arr B
    int B_end = 0;
    
    // Traversing each element of A[] from starting
    // Checking if there is a valid operation
    // that can be performed.
    for (int i = 0; i < N; i++) {
        // if the stack is not empty
        if(!S.empty()) {
            // Top of the Stack.
            int top = S.top();
            
            // If the top of the stack is
            // Equal to B_end+1, we will pop it
            // And increment B_end by 1.
            
            while (S.top() == B_end+1) {
                // if current top is equal to
                // B_end+1, we will increment
                // B_end to B_end+1
                B_end = B_end + 1;
                // pop the top element
                S.pop();

                // If the stack is empty We cannot
                // further perform this operation.
                // Therefore break
                if (S.empty())
                {
                    break;
                }

                // Current Top
                top = S.top();
            }

            // If stack is empty
            // Push the Current element
            if (S.empty()) {
                S.push(A[i]);
            }
            else
            {
                top = S.top();

                // If the Current element of the array A[]
                // if smaller than the top of the stack
                // We can push it in the Stack.
                if (A[i] < top)
                {
                    S.push(A[i]);
                }
                // Else We cannot sort the array
                // Using any valid operations.
                else
                {
                    // Not Stack Sortable
                    return false;
                }
            }
        }
        else
        {
            // If the stack is empty push the current
            // element in the stack.
            S.push(A[i]);
        }
    }

    // Stack Sortable
    return true;
}

// Driver's Code
int main()
{
	int A[] = { 4, 1, 2, 3 };
	int N = sizeof(A) / sizeof(A[0]);
	Check(A, N)? cout<<"YES": cout<<"NO";
	return 0;
	
}