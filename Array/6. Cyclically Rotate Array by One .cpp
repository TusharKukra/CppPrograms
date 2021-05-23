#include<bits/stdc++.h>
using namespace std;

// Array Rotation Cyclically


void rotateTheArrayByOne(int* arr, int n){

    int temp = arr[n-1]; // store the last element

    // now shift remaining array 1 step ahead
    for(int i = n-1 ; i>0 ;i--){
        arr[i] = arr[i-1];  // i.e the element at at (i-1)th position will be shifted to the ith position : ((i-1) + 1)th 
    }

    // the last element comes to the front
    arr[0] = temp;
}

int main(){

    int n;
    cin>>n;

    int* arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;
    rotateTheArrayByOne(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
