#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr,int n)
{
    for(int i = 1; i<n; i++) {
        // FOR ROUND 1 TO n-1
        bool swapped = false;

        for(int j = 0, j<n-1 ,j++) {
             
            //process element till n-i th index  (n-1 tak isley quke last wala toh waise bhi sort hojata isley n-1 tak hi liya)
            if(arr[j] > arr[j+1]) {   // agar jth number ka bada j+1 wale se toh swap karenge (j yani index 1 pe ka elemnt)
                swap(arr[j], arr[j+1]);  // inke multipe round hoge jisme j apne j+1 ko swap karte rhega jab tak sab sort nhi ho jate
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}
