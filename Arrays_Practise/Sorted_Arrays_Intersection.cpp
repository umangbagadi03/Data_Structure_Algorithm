// Sorted Arrays Intersection - Given 2 sorted arrays, return the intersection of both the arrays. The intersection of 2 arrays means all the elements which are present in both.

 vector<int> intersection(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int m = B.size();
    int i = 0, j = 0;  // Initialize i and j
    vector<int> result;

    while (i < n && j < m) {  // Use the correct loop conditions
        if (A[i] == B[j]) {
            result.push_back(A[i]);
            i++;  // Move both i and j when there's a match
            j++;
        } else if (A[i] < B[j]) {
            i++;  // Move only i
        } else {
            j++;  // Move only j
        }
    }
    
    return result;
}
