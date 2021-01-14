#include<bits/stdc++.h>
using namespace std;

// Check whether a given string is a palindrome or not
// here we use two pointer method 

bool isPalindrome (char a[]){

     // aabbba 

     int i=0;
     int j = strlen(a) -1 ;

     while (i<j){
          if(a[i]==a[j]){
               i++;
               j--;
          }

          else{
               return false;
          }
     }

     return true;
}

int main(){
     
     char a[1000];
     cin.getline(a,1000);

     if(isPalindrome(a)){
          cout<<"Its a Palindrome";
     }

     else{
          cout<<"Not a Palindrome";
     }
     return 0;
}
