// Dutch National Flag ------
/*
Sort an array A where each of the elements belong to the set: {0, 1, 2}.

Expected Time Complexity: O(n)

Try to solve it without storing the count of 0s, 1s and 2s.

*/

void sortTheArray(vector<int> &A) {
    int n = A.size();
    
    int start = 0;
    int end = n - 1;
    
    for (int i = 0; i <= end;) {
        if (A[i] == 0) {
            swap(A[i], A[start]);
            i++;
            start++;
        } else if (A[i] == 2) {
            swap(A[i], A[end]);
            end--;
        } else {
            i++;
        }
    }
}
