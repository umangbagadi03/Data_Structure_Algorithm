#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j) {
    // Base case
    if (i >= j) {
        return true;
    }

    if (str[i] != str[j]) {
        return false;
    }

    // Recursive case
    return checkPalindrome(str, i++, j--);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (checkPalindrome(input, 0, input.length() - 1)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
