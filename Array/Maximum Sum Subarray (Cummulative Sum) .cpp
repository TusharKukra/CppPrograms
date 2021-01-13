#include<bits/stdc++.h>
using namespace std;

// Maximum Subarray Sum using Cummulative Sum Method
// Time Complexity : O(n^2)


int main(){

     int n;
     cin>>n;
     int a[n], cumSum[n]={0};
     int currentSum=0, maximumSum=0, left=-1,right=-1;

     // firstly we will enter our first element of array a
     cin>>a[0];

     // then put it in the 1st position of cummulative array
     cumSum[0] = a[0];

     // now enter the elements and place it in array a[n] from 2nd Position
     // and simultaneously insert them in cummulative array
     for(int i =1;i<n;i++){
          cin>>a[i];
          cumSum[i] = cumSum[i-1]+a[i];

     }


     // Generating Subarrays
     for(int i=0;i<n;i++){
          for(int j=i;j<n;j++){

               //Subarray
               currentSum = 0;

               currentSum = cumSum[j] - cumSum[i-1];  

               //checking for maximumSum 
               if(currentSum > maximumSum){
                    maximumSum = currentSum;
                    left = i;
                    right = j;
               }
          }
     }

     //Printing MaxSum
     cout<<"Maximum Sum : "<<maximumSum<<endl;

     //Printing Subarray
     for(int k=left;k<=right;k++){
          cout<<a[k]<<" ";
     }


     return 0;
}
