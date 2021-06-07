#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int i,j,a=1;
    for(i=0;i<n;i++){
            a=1;

        for(j=n;j>i;j--){
            cout<<a<<" ";
            a++;
        }
            cout<<endl;
    }

    return 0;
}
