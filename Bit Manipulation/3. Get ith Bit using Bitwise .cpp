#include<bits/stdc++.h>
using namespace std;

// Get ith Bit

// for ith bit from right side : so we do : [ n & (1 << i)]
// and if that number is > 0 then our req bit is 1 otherwise 0

// 1<<i means shift 1 bit ith times , so it comes down exactly on the ith bit we need to find in our number



bool ithBit(int n, int i){
    return (n&(1<<i)) ;
}

int main(){

    int n,i;
    cin>>n>>i;

    int ans = ithBit(n,i);
    if(ans > 0){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}
