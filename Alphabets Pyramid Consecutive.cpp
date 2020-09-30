#include<bits/stdc++.h>

using namespace std;

int main(){

int i,j,n;
char ch = 'A';

cout<<"Enter number of Lines: ";
cin>>n;

for(i=1;i<n+1;i++){

    

    for(j=0;j<i;j++){

        cout<<ch++<<" ";

    }


    cout<<endl;

}

}
