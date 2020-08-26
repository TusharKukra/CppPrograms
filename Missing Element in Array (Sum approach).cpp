#include<iostream>
#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

int n;
cout<<"Enter number of Elements: ";
cin>>n;
int a[n-1];

for(int i=0; i<n-1; i++){
    cout<<"Enter elements: ";
    cin>>a[i];
}
ll sum1= (n*(n+1))/2;
ll sum2= 0;
for(int i=0; i<n-1;i++){
    sum2+=a[i];
}
cout<<"Missing Number is: "<<sum1-sum2<<endl;
return 0;
}
