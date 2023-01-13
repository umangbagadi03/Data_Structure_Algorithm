// reverse first k group

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// function to reverse first k elements of a queue
queue<int> modifyQueue(queue<int> q, int k) {
    //algo:
    //first k element stack me daaldo  and queue se hatado
    // k element stack se nikalke wapas queue me daalde 
    // fer queue k (n-k) starting k elements, wapas queue me daalde

    stack<int> s;
    // pop k elements from queue and push into stack
    for(int i = 1; i < k; i++) {
        int val = q.front();    // front element queue ka
        s.pop();
        q.push(val);
    }
    // 
    while(!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    int t = q.size() - k;  

    while(t--) {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;

}
