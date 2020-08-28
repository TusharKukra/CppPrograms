#include<bits/stdc++.h>

using namespace std;
int main(){

int arr[10],i,num,n,c=0,pos;

cout<<"Enter Array Size: ";
cin>>n;

cout<<"Enter Array Elements: ";
for(i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Enter number to be Search: ";
cin>>num;
for(i=0;i<n;i++){

    if(arr[i]==num){
        c=1;
        pos=i+1; //we add 1 bcoz our array starts from 0
        break;
    }
}
if(c==0){
    cout<<"Number not Found";
}
else {
    cout<<num<<" is found at "<<pos;
}
return 0;
}
