#include<bits/stdc++.h>
using namespace std;

// Update a bit : 

int updateBit(int n, int i, int m){
    int mask = ~(1<<i);
    int cleared_n = n & mask;
    n = cleared_n | (m<<i);

    return n;

}

int main(){

    int n,i,v;
    cin>>n>>i>>v;

    cout<<updateBit(n,i,v);
    return 0;
}
