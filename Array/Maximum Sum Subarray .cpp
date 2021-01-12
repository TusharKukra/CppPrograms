#include<bits/stdc++.h>
using namespace std;

int main(){

     // Maximum Sum Subarray Problem

     int n,i,j;
     cin>>n;

     int a[n];
     int left=-1;
     int right=-1;
     int maximumSum=0;
     int currentSum=0;

     //Input Array
     for(int i=0;i<n;i++){
          cin>>a[i];
     }

     //Generating Subarrays
     for(int i=0;i<n;i++){
          for(int j=i;j<n;j++){

               currentSum =0;
               for(int k=i;k<=j;k++){
                    currentSum+=a[k];
               }

               if(currentSum > maximumSum){
                    maximumSum = currentSum;
                    
                    left = i;  // they are for maxSum subarray index
                    right = j;
               }
          }
     }


     //Printing Maximum Sum
     cout<<"Maximum Sum: "<<maximumSum<<endl;

     // to print the maximum sum Subarray
     cout<<"Subarray is : ";
     for(int k = left ;k<=right;k++){
          cout<<a[k]<<" ";
     }

     
     return 0;
}
