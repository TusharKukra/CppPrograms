#include<bits/stdc++.h>
using namespace std;

// 2 Pointer Method (only for the sorted array)

int main(){

     int a[] = {1,3,5,7,10,11,12,13};  // in 2 pointer method the given array must be sorted (otherwise sort it !!!)

     int sum = 16;

     int i=0; // first pointer
     int j= sizeof(a) / sizeof(int) - 1;  // this means jth pointer will be at last element of the array = size of array - 1

     while(i<j){

          int currentSum = a[i] + a[j];

          if(currentSum > sum){
               j--;  // if our current sum is greater than sum (given) then reduce the overall size by decreaing value of j (as it is a Sorted array)
          }

          else if(currentSum < sum){
               i++;  // if our current sum is less than sum (given) then increase the overall size by increasing value of i (as it is a Sorted array)
          }

          else if(currentSum == sum) {

               cout<<a[i]<<" and "<<a[j]<<endl;
               i++;
               j--; // these are write for finding the new pairs
          }
     }


     return 0;
}
