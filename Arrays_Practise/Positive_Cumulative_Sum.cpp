// The cumulative sum of an array at index i is defined as the sum of all elements of the array from index 0 to index i.




#include <iostream>
#include <vector>

using namespace std;

vector<int> CumulativeSum(vector<int> &arr) {
    int n = arr.size();
    vector<int> CumulativeSum(n);
    CumulativeSum[0] = arr[0];

    for (int i = 1; i < n; i++) {
        CumulativeSum[i] = CumulativeSum[i - 1] + arr[i];
    }
    return CumulativeSum;
}

vector<int> getPositiveCumulativeSum(vector<int> &cumulativeSum) {
    vector<int> PositiveCumulativeSum;
    for (int sum : cumulativeSum) {
        if (sum > 0) {
            PositiveCumulativeSum.push_back(sum);
        }
    }
    return PositiveCumulativeSum;
}

int main() {
    vector<int> arr = {1, -2, 3, 4, -6};

    vector<int> cumulativeSum = CumulativeSum(arr);
    vector<int> positiveCumulativeSums = getPositiveCumulativeSum(cumulativeSum);

    cout << "Initial Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    cout << "\nCumulative Sum: ";
    for (int sum : cumulativeSum) {
        cout << sum << " ";
    }

    cout << "\nPositive Cumulative Sum: ";
    for (int sum : positiveCumulativeSums) {
        cout << sum << " ";
    }

    return 0;
}
