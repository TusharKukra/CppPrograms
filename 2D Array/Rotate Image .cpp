#include<bits/stdc++.h>
using namespace std;

// Rotate Image Problem : Rotating a 2D Matrix

//Rotating using 2 methods : using STL, without using STL

//without STL
void rotateWithoutSTL(int a[][1000], int n){

    // for doing reverse of the each rows
    for(int row=0; row<n; row++){
        
        int startcol = 0;
        int endcol = n-1;

        while(startcol < endcol){

            swap(a[row][startcol] , a[row][endcol]);
            startcol++;
            endcol--;
        }
    }

    //for doing transpose of the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(i<j){
            swap(a[i][j] , a[j][i]);
            }
        }
    }

}


//using STL
void rotateWithSTL (int a[][1000], int n){

    //same thing as above (reverse every rows) using reverse(starting_container, end_container) method
    for(int i=0;i<n;i++){
        reverse(a[i],a[i]+n);   //a[i] is the row pointer
    }

    //Transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(i<j){
            swap(a[i][j] , a[j][i]);
            }
        }
    }

}

int main(){

    int a[1000][1000];
    int n;
    cin>>n;
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    rotateWithoutSTL(a,n);
    
    //rotateWithSTL(a,n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


