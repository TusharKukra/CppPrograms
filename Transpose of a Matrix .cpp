#include <bits/stdc++.h>
#define N 3
using namespace std;


void transpose(int A[N][N], int B[N][N]){
int row,col;
for(row=0;row<N;row++){
    for(col=0;col<N;col++){
        B[row][col]=A[col][row];
    }
}
}

int main() {
	int A[N][N]= {{1,2,3},{4,5,6},{7,8,9}};
	int B[N][N], row,col;
	transpose(A,B);
	for(row=0;row<N;row++){
	    for(col=0;col<N;col++){
	        cout<<B[row][col]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
