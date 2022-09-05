#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m, int arr3[]) {    // two array arr1 and arr2 jinko merge krna hai arr3 me , n arr1 k length,m arr2 k
    int i = 0, j = 0;     // ekk array ko i de diya dusre ko j diya
    int k = 0;            // aur dono ko jisme merge krne wale usko j de diya
    while(i<n && j<m) {   // i, j ko kab tak lena hai jab tak vo unke length s chote hai
         if(arr1[i] < arr2[j]) {   // agar arr2 ka element bada arr1 se toh arr1 ka jayenga pahle arr3 jo k ekk blank bnaya hai apn n usme
            arr3[k]=arr1[i];
            k++;  // aur phir next spot k liye ++ kiya
            i++;  // i ka ekk gaya ab next i ka lene k liye apn n ++ kiya

         }
         else{     // nhi toh phir i wala bada toh j wala pahle jayega
            arr3[k]=arr2[j];
            k++;   // increment krna padega na quke koi bhi andar jao
            j++;

         }

    }
    while(i<n) {   // ab i aur j me same number k elemnt nhi hai toh kisse ekk me k pahle khtm hoge incase agar j k khtm hogaye aur i me baki hai toh apn i k aise k aise copy kar lenge k arr3 me re
        arr3[k]=arr1[i];
        k++;
        i++;

    }
    while(i<m) {   // same agr i khtm toh j k le lenge pure bache hue
        arr3[k]=arr2[j];
        i++;
        j++;
    }
}
void print(int ans[], int n) {    // function to print
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}

int main() {

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);


    return 0;
}

// lb tutorial 20
