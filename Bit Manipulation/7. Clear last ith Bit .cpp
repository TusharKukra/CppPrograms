#include<bits/stdc++.h>
using namespace std;

// Clear last ith Bits: 

int clearIthBit(int n, int i){
    
    // firstly take all ones

    // then left shift i+1 no. of places

    int mask = (-1 << i);
    n = n & mask;

    return n;

}

int main(){

    int n,i;
    cin>>n>>i;
    // here i = number of bits from right
    cout<<clearIthBit(n,i);
    return 0;
}
