#include<bits/stdc++.h>
using namespace std;

// Removing Consecutive Duplicate Characters from a String
// Example:  Coodding -> Coding

void removeDuplicates (char a[]){

     int l = strlen(a);

     // After finding length of given string , check whether it is equal to 1 or 0
     if(l==1 || l==0){
          return;   //then return the exact string back
     }

     //and if string length is not 1 or 0
     // use two pointer like i and j , where j is previous pointer and i is current position pointer

     int prev=0;
     for(int current=1;current<l;current++){

          // 1st character has pointer prev=0, the next character is denoted by pointer current (starts from position 1)
          
          //now check if consecutive characters are equal or not, if they are equal then skip the character and if not 
          // then increase the value of previous (j) and then store the value of current (i) in the new prev(j)

          if(a[current] != a[prev]){
               prev++;
               a[prev] = a[current];
          }

     }

     a[prev+1] = '\0';  // last character must be NULL Character

     return;
}

int main(){

     char a[1000];
     cin.getline(a,1000);

     removeDuplicates(a);

     cout<<a<<endl;

     return 0;
}
