#include<bits/stdc++.h>
using namespace std;

// Maximum Subarray Sum using Kadane Algorithm
// Time Complexity : O(n)

int main(){

     int n;
     cin>>n;

     int a[n], currentSum =0, maxSum=0;

     for(int i=0;i<n;i++){
          cin>>a[i];
     }


     //Kadane Algo:
     for(int i=0;i<n;i++){
          currentSum += a[i];

          if(currentSum < 0){
               currentSum = 0;
          }

          maxSum = max(currentSum,maxSum);
     }

     cout<<"Maximum Sum : "<<maxSum<<endl;


     return 0;
}
