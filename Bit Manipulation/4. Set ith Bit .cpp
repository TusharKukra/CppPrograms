#include<bits/stdc++.h>
using namespace std;

// Set a (ith) particular Bit

// Eg : for making a particular bit = 1(set) we will do OR operation 
// bcoz OR operation will make that bit set 
// [n | (1<<i) ]


int SetithBit(int n, int i){
    int mask = (1<<i);
    int ans = n | mask; 
    return ans ;
}

int main(){

    int n,i;
    cin>>n>>i;

    n = SetithBit(n,i);
    cout<<"Final Ans : "<<n;
    return 0;
}
