// find the cintersection between two words

#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)

{
	int i = 0, j = 0;   // i aur j 2 pointer hai jo ki arr1 ka start me i hai j arr2 k
    vector<int> ans;
    while(i<n && j<m) {    // n, m size hai arr1 aur arr2 k dono i aur j size k under hai tab tak loop chalega
    
    if(arr1[i]==arr2[j])
    {
    	ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i] < arr2[j]) {
  		i++;
    }
    else
    {
    	j++;
    }
    
    }
    return ans;
}