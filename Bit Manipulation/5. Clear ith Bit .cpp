#include<bits/stdc++.h>
using namespace std;

// Clear a bit (i.e make ith bit = 0)

// mask = (1<<i)
// then flip all the bits of mask : using negation
// then do (number & mask)

void clearBit(int &n, int i){
    int mask = ~(1<<i);
    n = n & mask;
}

int main(){

    int n,i;
    cin>>n>>i;

    clearBit(n,i);
    cout<<n<<endl;
    return 0;
}
