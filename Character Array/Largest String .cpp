#include<bits/stdc++.h>
using namespace std;

// Largest String: Read N, followed by N strings and print the largest string and its length

// Just find out the largest string out of N number of strings

 int main(){

      int n;
      cin>>n;

      char a[1000];
      char largest[1000];

      int length=0;
      int largestlength =0;

      cin.get();  // just to read '/n' after reading n (no. of lines)

      for(int i=0;i<n;i++){
           cin.getline(a,1000);

           length = strlen(a);

           //now if length of string is greater than the largest string then it will be the largestlength
           //and then copy the string a (which has greater length) into the largest array

           if(length > largestlength){

                largestlength = length;

                strcpy(largest , a);  // use <cstring> and it will take parameter (string where u copied , string which u copy)

           }

      }

      cout<<"Largest String : "<<largest<<" and length : "<<largestlength;

      return 0;
 }


