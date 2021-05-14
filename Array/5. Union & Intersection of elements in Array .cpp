// Method -1 (Brute Force)

#include<bits/stdc++.h>

using namespace std;

/*
Union of Two Arrays 

Approach : Brute Force 
            By traversing both the arrays using two pointers and compare their values

*/

void unionOfArrays(int* a, int* b, int n, int m){

    // creating two pointers
    int i=0, j=0;

    while(i<n && j<m){  // i pointed to a & j pointed to b

        if(a[i] < b[j]){
            cout<<a[i]<<" ";
            i++;
        }

        else if(a[i] > b[j]){
            cout<<b[j]<<" ";
            j++;
        }

        else{  // if both elements are equal
            cout<<b[j]<<" ";
            i++;
            j++;
        }
    }

    // print remaining elements of the larger array
    while(i<n){
        cout<<a[i++]<<" ";
    }
    while(j<m){
        cout<<b[j++]<<" ";
    }
}

int main(){

    int n,m;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int* b = new int[m];
    for(int j=0;j<m;j++){
        cin>>b[j];
    }

    unionOfArrays(a,b,n,m);
    return 0;
}
