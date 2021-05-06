#include<bits/stdc++.h>
using namespace std;

// Odd Even using BitWise Operator

// for odd even : take bitwise and of the number with 1 , so if the no. is even then it does not have a 1 at ones place
// if it is odd then it must have 1 at ones place so if it has 1 at ones place then after doing 'AND' with 1 it will return
// 1 as output

bool isOdd(long long int n){
    return (n & 1);
}

int main(){

    long long int n;
    cin>>n;

    long long int ans = isOdd(n);
    if(ans == 1){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }
}
