#include<bits/stdc++.h>
using namespace std;

/*
There are n stairs, a person standing at the bottom wants to reach the top.
The person can jump atmost k stairs at a time. Count the no. of ways the person can reach the top.
*/

// Dynamic Programming Approach

int numberOfWaysToTop(int n, int k){

    // base case :
    if(n == 0){
        return 1;
    }

    // recursive case :
    int ways = 0;
    for(int i=1;i<=k;i++){
        if(n-i >= 0){
            ways+=numberOfWaysToTop(n-i,k);
        }
    }
    return ways;
}

// DP (Top Down Approach)
int numberOfWaysToTopDown(int n, int k, vector<int>& memo){

    // base case :
    if(n == 0){
        return 1;
    }

    // lookup
    if(memo[n]!=0){
        return memo[n];
    }

    // recursive case :
    int ways = 0;
    for(int i=1;i<=k;i++){
        if(n-i >= 0){
            ways+=numberOfWaysToTop(n-i,k);
        }
    }
    return memo[0] = ways;
}

// Bottom Up Appraoch
int numberOfWaysToTopBottomUp(int n, int k){
    vector<int> dp(n+1, 0);

    // base case:
    dp[0] = 1;
    
    // recursive case: 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i-j >= 0){
                dp[i] += dp[i-j];
            }
        }
    }
    return dp[n];
}

int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;

    cout<<numberOfWaysToTop(n,k)<<endl;
    vector<int> memo(n+1, 0);
    cout<<numberOfWaysToTopDown(n,k,memo)<<endl;

    cout<<numberOfWaysToTopBottomUp(n,k)<<endl;
    return 0;
}
