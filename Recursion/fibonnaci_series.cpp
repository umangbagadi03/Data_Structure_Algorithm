#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive calculation
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;

    return 0;
}
