/*
This code is a program to reverse a number using a stack data structure. The program first defines a stack called 'st' which will be used to store the digits of the number.
There is a function called 'push_digits' which takes in an integer as a parameter. This function separates the digits of the number and pushes them into the stack one by one.
There is another function called 'reverse_number' which also takes in an integer as a parameter. This function calls the 'push_digits' function to store the digits of the number in the stack. It then creates a new integer called 'reverse', which will be used to store the reversed version of the number. It also creates an integer called 'i' which is used to place the digits in the correct position as they are popped from the stack.
The function then enters a loop which continues until the stack is empty. Inside the loop, the top element of the stack is popped and added to the 'reverse' variable in the correct position. The 'i' variable is then multiplied by 10 to shift the digits over by one place.
After the loop ends, the 'reverse_number' function returns the reversed number.
In the main function, an integer called 'number' is defined and given the value 39997. The 'reverse_number' function is called with 'number' as the parameter, and the returned value is printed to the console.
*/

// CPP program to reverse the number
// using a stack

#include <bits/stdc++.h>
using namespace std;

// Stack to maintain order of digits
stack <int> st;

// Function to push digits into stack
void push_digits(int number)
{
	while (number != 0)
	{
		st.push(number % 10);
		number = number / 10;
	}
}

// Function to reverse the number
int reverse_number(int number)
{
	// Function call to push number's
	// digits to stack
	push_digits(number);
	
	int reverse = 0;
	int i = 1;
	
	// Popping the digits and forming
	// the reversed number
	while (!st.empty())
	{
		reverse = reverse + (st.top() * i);
		st.pop();
		i = i * 10;
	}
	
	// Return the reversed number formed
	return reverse;
}

// Driver program to test above function
int main()
{
	int number = 39997;
	
	// Function call to reverse number
	cout << reverse_number(number);
	
	return 0;
}
