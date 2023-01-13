// reverse queue using stacks
#include<iostream>
using namespace std;

queue<int> rev(queue<int> q) {
    stack<int> s;  // stack bnaya s nam ka

    while(!q.empty()) {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()) {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Call the rev function to reverse the elements in the queue
    q = rev(q);

    // Print the elements of the reversed queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
