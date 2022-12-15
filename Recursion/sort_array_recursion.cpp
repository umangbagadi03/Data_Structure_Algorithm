// c++ program to sort array

#include iostream
using namespace std;

bool isSorted(int *arr, int size) {  // function with array and its size

    // base case 
    if(size==0 || size ==1){  // if the size is zero aur 1 no need to sort
        return true;   // so returning true

    }

    if(arr[0] > arr[1]){   // if first place is greater than second then we will sort
        return false;
    
    else {
        bool remainingPart = isSorted(arr + 1, size - 1);   // apn if wale isme first array ka dekh liya toh ab next array pe jayenge isley arr+! aur size 1 se kam hoge
        return remainingPart;
    }
}

int main() {
    int arr[5] = {2,3,4,6,8,9}  
    int size = 5

    bool ans = isSorted(arr,size);   // function call

    if(ans) {
        cout << "Array is sorted" << endl;
    }

    else{
        cout << "Array is not sorted" <<endl;
    }

    return 0;
};