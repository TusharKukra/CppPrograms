#include<bits/stdc++.h>
using namespace std;

// Spiral Print -2D Matrix

int main(){

    int m,n;
    cin>>m>>n;

    int a[m][n] = {0};
    
    int val =1;

    // to print array
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            a[row][col] = val;
            val++;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }

    // first make 4 pointers
    int startrow=0, startcol=0, endrow=m-1, endcol=n-1;

    //Printing spiral
    while(startrow<=endrow && startcol<=endcol){

        //Code for 1st row (left to right)
        for(int i=startcol;i<=endcol;i++){
            cout<<a[startrow][i]<<" "; 
        }
        startrow++;

        //Code for last column (top to bottom)
        for(int i=startrow;i<=endrow;i++){
            cout<<a[i][endcol]<<" ";
        }
        endcol--;

        //Code for last row (right to left)
        
        // here we use one more condition, i.e if startrow pointer is less than endrow pointer
        // then only we want to print this otherwise overlapping ocurs
        
        if(startrow<endrow){
            for(int i=endcol;i>=startcol;i--){
                cout<<a[endrow][i]<<" ";
            }
            endrow--;
        }

        //Code for start column (bottom to top)

        // here also we need to check for the above condition 
        // if endcol > startcol then you can go upwards, otherwise no need to print again that column

        if(startcol<endcol){
            for(int i=endrow;i>=startrow;i--){
                cout<<a[i][startcol]<<" ";
            }
            startcol++;
        }
    }

    return 0;
}
