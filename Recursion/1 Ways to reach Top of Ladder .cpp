#include<bits/stdc++.h>
using namespace std;

/*
There are n stairs, a person standing at the bottom wants to reach the top.
The person can jump atmost k stairs at a time. Count the no. of ways the person can reach the top.
*/


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

int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;

    cout<<numberOfWaysToTop(n,k)<<endl;


    return 0;
}
