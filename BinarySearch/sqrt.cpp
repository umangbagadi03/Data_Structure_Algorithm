#include<iostream>
using namespace std;
  
  long long int sqrtInteger(int n){    // agar sirf int lete toh bohot bade number ka sqrt nhi nikal pata run time error aa jata isley long long use kiya hai 
    int s = 0;   // start point
    int e = n;   // end point which is nth number
    long long int mid = s + (e-s)/2;

    long long int mid = -1;

    while(s<=e) {
        long long int square = mid*mid;

        if (square == n)      // agar apnek0 jiska square root nikalna hai vo mid jitna agaya toh apna ans wahi ayenga
           return mid;

        if(square < n ){   // agar n bada sqare of mid k toh apneko mid k right side hi dekhna padega isley mid + 1 liya hai
            ans = mid;
            s = mid+1;   // start point mid +1

        }
        else
    
        {
            e = mid - 1;   // else agar square mid ka chota aya apne required isse toh left me jana isley mid - 1

        }
        mid = s + (e-s)/2;

    }
    return ans;
  }

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;
    return 0;
}
