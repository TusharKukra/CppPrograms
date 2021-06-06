#include<bits/stdc++.h>
using namespace std;

// Maximum Subarray Sum using Kadane Algorithm
// Time Complexity : O(n)


int kadane(int* a, int n){
    int maxSum = INT_MIN;
    int currentSum = 0;
    
    for(int i=0;i<n;i++){
        currentSum = currentSum + a[i];
        if(currentSum<0){
            currentSum = 0;
            }
        maxSum = max(currentSum, maxSum);
    }

    return maxSum;
}

int main(){ 

    int n;
    cin>>n;

    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<kadane(a,n)<<endl;

    return 0;
}
