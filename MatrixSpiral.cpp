#include <bits/stdc++.h> 
#define R 3
#define C 6
using namespace std; 

//Spiral form of Matrixs

void Spiral(int m, int n, int a[R][C]){
    int i,k=0,l=0;
    while(k<m && l<n){

        //Printing 1st Row starting index form l to n
        for(i=l;i<n;i++){
            cout<<a[k][i]<<" ";
        }
        k++;

        //Printing last column from index k to m
        for(i=k;i<m;i++){
            cout<<a[i][n-1]<<" ";
        }
        n--;

        //Printing last row from right to left from index n-1 to l
        if(k<m){
            for(i=n-1;i>=l;i--){
                cout<<a[m-1][i]<<" ";
            }
            m--;

            
        }
        if(l<n){

                for(i=m-1;i>=k;i--){
                    cout<<a[i][l]<<" ";
                }
                l++;
            }


    }
}
int main(){
    int a[R][C] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
    Spiral(R,C,a);
    return 0;
}
