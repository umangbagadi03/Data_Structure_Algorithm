// leetcode
// our array is in the form of mountain we have to find the peak elemnt in it 

// Including necessary header for vector and using the standard namespace.
#include <vector>
using namespace std;

// Defining a class named "solution" for implementing the solution.
class solution {
public:
    // Function to find the peak element in a mountain array.
    int find_pivot(vector<int> v) {
        int s = 0, e = v.size() - 1;
        int mid = (s + e) / 2;
        
        // Binary search to find the peak element.
        while (s < e) {
            // If the middle element is smaller than the next element,
            // it indicates that the peak lies to the right of the middle.
            if (v[mid] < v[mid + 1])
                s = mid + 1;
            else
                // Otherwise, the peak lies to the left of the middle.
                e = mid;
            
            // Recalculate the middle for the next iteration.
            mid = (s + e) / 2;
        }
        
        // The final value of "s" is the index of the peak element.
        return s;
    }
    
    // Function to find the peak index in the mountain array.
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};

// The main function is missing in this code snippet.
// You would typically include the main function to test your code.
// The main function would create an instance of the "solution" class,
// call the "peakIndexInMountainArray" function, and print the result.

// Example usage:
// int main() {
//     solution s;
//     vector<int> mountainArray = {1, 3, 5, 9, 7, 4, 2};
//     int peakIndex = s.peakIndexInMountainArray(mountainArray);
//     cout << "Peak index: " << peakIndex << endl;
//     return 0;
// }

