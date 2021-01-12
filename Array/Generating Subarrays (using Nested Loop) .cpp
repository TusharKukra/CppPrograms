#include<bits/stdc++.h>
using namespace std;

int main(){

     int n;
     cin>>n;

     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }

     // Generate all subarray 

     for(int i=0;i<n;i++){  // starting point
          for(int j=i;j<n;j++){ // ending point
               
               // Printing elements of subarray (i,j)
               for(int k=i;k<=j;k++){ // chooses the current posotion of the element
                    cout<<a[k]<<",";
               }
               cout<<endl;
          }
     }
     return 0;
}
