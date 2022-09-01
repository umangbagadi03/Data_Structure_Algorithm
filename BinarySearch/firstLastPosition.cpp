#include<vector>
#include<iostream>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){ // agr key mid elemnt jitne ho gaye toh ans jo hai vo mid hoga apna
            ans = mid;
            e = mid - 1;   // aur apn sirf left me dekhenge toh endpoint equals to mid - 1
        }
        else if(key > arr[mid]) {//Right me jao # key elemnt bada hai mid se toh apneko bas right side me dekhna hai
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao # key elemnt chota hai toh left me dekhna hai
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}