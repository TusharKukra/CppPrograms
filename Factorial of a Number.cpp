#include <iostream>
using namespace std;

int fact(int n){
    int r;
    
    if (n==0 || n==1){
        r=1;
    }
    else{
       r=n*fact(n-1);}
    return r;
}

int main() {
int n,r;
cout<<"Enter any number: ";
cin>>n;
r=fact(n);
cout<<"Factorial of the given number: "<<r;
return 0;
}

