Example: 
4
A B C D
E F G H
I J K L
M N O P

#include<bits/stdc++.h>
using namespace std;

// 2D Character Array

int main(){

    int n;
    cin>>n;

    char a = 'A';

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }

    return 0;
}
