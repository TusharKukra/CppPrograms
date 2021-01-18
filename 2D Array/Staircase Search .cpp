// Method -1 (Linear Search)

#include<bits/stdc++.h>

using namespace std;

// Searching Element in a matrix (using Linear Search)
// Time Complexity : O(n^2) (Not a efficient method)
int stairCaseSearch(int mat[][1000], int n , int x){

    if(n==0){
        return -1;
    }

    //traversing matrix
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j] == x){
                cout<<"Element found at ("<<i+1<<","<<j+1<<")"<<endl;
                return 1;
            }
        }
    }
    cout<<"Element not found"<<endl;
    return 0;

}


int main() {
    int arr[1000][1000] = { {1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};
    stairCaseSearch(arr,4,12);
	return 0;
}
