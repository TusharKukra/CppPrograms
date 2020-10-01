#include<iostream>

using namespace std;

int main(){

int i,j,r;
char ch = 'A';

cout<<"Enter number of rows: ";
cin>>r;

for(i=1;i<r+1;i++){

    

    for(j=0;j<i;j++){

        cout<<ch++<<" ";

    }


    cout<<endl;

}

}
