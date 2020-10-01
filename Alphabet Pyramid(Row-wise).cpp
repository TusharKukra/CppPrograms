#include<iostream>

using namespace std;

int main(){

int i,j,n;
char ch = 'a';

cout<<"Enter total number of Lines: ";
cin>>n;

for(i=1;i<n+1;i++){



    for(j=0;j<i;j++){

        cout<<ch<<" ";

    }
    ch++;

    cout<<endl;

}

}
