// An Arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant. For instance, the sequence 5, 7, 9, 11, 13, 15, . . . is an arithmetic progression with a common difference of 2.

bool isArithmeticSequence(vector<int> &arr) {
    int n = arr.size();
    int i, j;
    
    // Initialize i and j before using them
    i = 0;
    j = 1;
    
    // Check if the sequence is empty or has only one element
    if (n <= 1) {
        return true;
    }
    
    // Calculate the common difference between elements
    int commonDiff = arr[1] - arr[0];
    
    while (j < n) {
        if (arr[j] - arr[i] != commonDiff) {
            return false; // If difference is not constant, not an arithmetic sequence
        }
        
        i++;
        j++;
    }
    
    return true; // All differences are equal, so it's an arithmetic sequence
}
