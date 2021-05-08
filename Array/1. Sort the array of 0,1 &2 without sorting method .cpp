#include<iostream>
using namespace std;

// Sort an array of 0s, 1s & 2s without using any sorting algorithm

void sortIt(int *a , int n){

    // firstly we will create 3 variables to count 0s, 1s, 2s
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    // now traverse the array and check whether the element is 0, 1 or 2 
    // if it is 0 then do cnt0++
    // if it is 1 then do cnt1++
    // if it is 2 then do cnt2++
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt0++;
        }
        if(a[i]==1){
            cnt1++;
        }
        if(a[i]==2){
            cnt2++;
        }
    }

    // now after getting all the count, arrange them in sorted array
    // putting 0s first (in the starting)
    for(int i=0 ; i<cnt0 ; i++){
        a[i] = 0;
    }

    // then after all the zeroes, put 1s
    for(int i=cnt0 ; i<(cnt0+cnt1) ; i++){
        a[i] = 1;
    }

    // at last put all the 2s
    for(int i=(cnt0+cnt1) ; i<n ; i++){
        a[i] = 2;
    }
}   

int main(){

    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sortIt(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;

}
