#include<bits/stdc++.h>
using namespace std;

// Clear a range from i to j Bits: 

int cleariTojBit(int n, int i, int j){
    
    // here we take two rows of set bits and then 
    // in 1st row (all ones) : we make all bits reset from ith position 
    // in 2nd row (all zeroes) : we make all bits set from (j+1)th position

    // then we take OR of both the rows and we get our mask 

    // and then we take AND Operation with given number.

    int ones = (~0);
    int a = ones << (j+1);
    int b = (1<<i) -1;  // we do -1 bcox : 1<<i will give let say 100000 , then after doing -1 it will become : 011111

    int mask = a | b;

    int ans = n & mask;

    return ans;

}

int main(){

    int n,i,j;
    cin>>n>>i>>j;
    cout<<cleariTojBit(n,i,j);
    return 0;
}
