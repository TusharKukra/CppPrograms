#include<bits/stdc++.h>
using namespace std;

// 2D Array- Wave Print 

int main(){
    
    //construct an 2D Array
    int m,n;
    cin>>m>>n;

    int a[m][n] = {0};   // array where all elements are initialized by 0

    //iterate over the array
    int val =1;
    for(int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col] = val;
            val++;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }

    // Wave Print

    // we need to start from column bcoz the wave pattern is like: 
    // 1st column top to bottom then 2nd column bottom to top and so on.

    // i.e in even columns : we need to print elements from top to bottom
    // in odd columns : we need to print elements from bottom to top

    for(int col=0;col<n;col++){

        if(col%2==0){
            for(int row=0;row<m;row++){
                cout<<a[row][col]<< " ";
            }
        }
        else{
            for(int row=m-1;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
        }
    }


    return 0;
}
