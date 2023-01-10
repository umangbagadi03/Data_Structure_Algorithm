#include<iostream>
#include<vector>
using namespace std;

class Solution {
    private:
        // helper function to check if an array is a palindrome
        bool checkPalindrome(vector<int> arr) {
            int n = arr.size();
            int s = 0; // start pointer
            int e = n - 1; // end pointer

            // compare the elements at the start and end pointers
            while(s <= e) {
                if(arr[s] != arr[e]) {
                    return false; // return false if they are not equal
                }
                s++; // increment the start pointer
                e--; // decrement the end pointer
            }
            return true; // if all elements are equal, return true
        }
    public:
        // function to check if a linked list is a palindrome
        bool isPalindrome(Node* head) {
            vector<int> arr; // create an array to store the elements of the linked list

            // traverse the linked list and store the elements in the array
            Node* temp = head;
            while(temp != NULL) {
                arr.push_back(temp -> data);
                temp = temp -> next;
            }

            // call the helper function to check if the array is a palindrome
            return checkPalindrome(arr);
        }
};
