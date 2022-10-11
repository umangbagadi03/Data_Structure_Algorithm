// insert new element in bottom of stack

// pahle dekhe ge ki stack khalii hai ky khai hai toh bat hi nhi bottom me waise hi add hogayega jo ki base class me implemnt kiya hai apn n

// nhi toh apn ekk ekk krke top se elment side me krte jayenge aur pora stack khali kar denge phir bottom me jo add krna hai usse add kar denge aur jo apn n stack  k elemnt side kiye the unko bhi phir se add kar denge


#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& s, int x) {  // int x apna vo elemnt hai jisse apn bottom m,e dalne wale hai, s stack hai
    // base class
    if(s.empty()) {   // agar bhai stack empty hai phir toh bat hi khtm hai quke bottomm me dalna hai waise hi push karr denge element ko toh vo bottom me chl jayega        s.push(x);
        s.push(x);   // jab empty hi hai toh apneko jo push krna tha x element vo apn directly hi push kar denge n vro
        return;

    }
    int num = s.top();   // nhi toh wahi top se element nikalte jao ekk ekk karke jab tak pura khali nhi ho jata phir bottom me apna x daldo aur phir se ekk ekk karke jo top se hataye the vo wapis daldenge apn  ekk karke quke apneko elemnt last me dalna tha jo ki apn ne dal diya toh ab wapis daldo ekk ekk karke
    s.pop();   // pop kardo ekk ekk karke thode der k lye top k element side me rakhdo jaise hi apna bottom element add hoga inko wapis dal denge

    // recursive call
    solve(s,x);

    s.push(num);  // jo hataye the top k element ekk ekk karke unko wapis dal rhe
}

stack<int> pushAtBottom(stack<int>& myStack, int x)  // jo bottom me add krna hai uske liye hai code
{
    solve(myStack, x);
    return myStack;
}
