#include<iostream>
using namespace std;
int main(){

int i,j,a=1,n;

cout<<"Enter number of Lines: ";
cin>>n;

for(i=1;i<n+1;i++){

    a=1;
    for(j=0;j<i;j++){

        cout<<a<<" ";
        a++;
    }
    cout<<endl;
}
return 0;
}
