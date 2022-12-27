// to find length of char arrays

#include <iostream>

using namespace std;


    //    keep it in mind that character arrays have length of one more than your characters because last one is for \0 to show that word has ended
int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {   
        count++;
    }

    return count;
}