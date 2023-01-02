/*This code is a solution to the Celebrity problem in C++. The Celebrity problem is defined as follows: there are n people, and among them, there is a celebrity. A celebrity is a person who is known by everyone else, but does not know anyone else. The task is to find the celebrity, if one exists.
The code begins by including the necessary header files and defining the Solution class. The Solution class has a private helper function knows that takes in a 2D vector M representing who knows whom, and two integers a and b. It returns true if person a knows person b, and false otherwise.
The Solution class also has a public function celebrity that takes in a 2D vector M and an integer n, and returns the celebrity number if one exists, or -1 if none exists. This function first pushes all the people into a stack. It then repeatedly takes the top two elements from the stack, compares them, and pushes the one that is not the celebrity back onto the stack. This process continues until there is only one element left in the stack, which is the potential celebrity.
the function then verifies that the potential celebrity is indeed a celebrity by checking that the celebrity does not know anyone and everyone knows the celebrity. If the potential celebrity fails either of these checks, the function returns -1 to indicate that there is no celebrity. If the potential celebrity passes both checks, the function returns the celebrity number.
The main function reads in the number of test cases and, for each test case, reads in the number of people n and a matrix M representing who knows whom. It creates an object of the Solution class and calls the celebrity function to find the celebrity, if one exists. It then prints the celebrity number or -1, depending on the result of the celebrity function.*/

#include<bits/stdc++.h>
using namespace std;

// user function template for cpp

/*
This is a private helper function that takes in a 2D vector M representing who knows whom, and two integers a and b. It returns true if person a knows person b, and false otherwise.
*/
class solution {
    private:
    bool  knows(vector<vector<vector<int> >& M, int a, int b, int n) {   
        if (M[a][b] == 1)    // 
             return true;
        else 
             return false;
    }
    /*
    This is the celebrity function, which takes in a 2D vector M and an integer n, and returns the celebrity number if one exists, or -1 if none exists. It first creates a stack s and pushes all the people (represented by their indices) into the stack.
    */
    
    public:
    // function to find there is celibrity or not in the party
    int celebrity(vector<int> >& M, int n){
        stack<int> s;
        // push all elements in the stack
        for(int i=0; i<n; i++) {
            s.push(i);
        }
        /*
        This while loop repeatedly takes the top two elements from the stack, compares them, and pushes the one that is not the celebrity back onto the stack. This process continues until there is only one element left in the stack, which is the potential celebrity.
        */
         while(s.size() > 1) {
            
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b,n)){
                s.push(b);
            }
            else
            {
                s.push(a);
            }

       }  
       int ans = s.top();
        //step3: single element in stack is potential celeb
        //so verify it
        // This code verifies that the potential celebrity is indeed a celebrity by checking that the celebrity does not know anyone and everyone knows the celebrity

        int zeroCount = 0;
        
        for(int i=0; i<n; i++) {
            if(M[ans][i] == 0)
                zeroCount++;
        }
        
        //all zeroes
        if(zeroCount != n)
            return -1;
        
        //column check
        int oneCount = 0;
        
        for(int i=0; i<n; i++) {
            if(M[i][ans] == 1)
                oneCount++;
        }
        
        if(oneCount != n-1)
            return -1;
        
        return ans;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends
