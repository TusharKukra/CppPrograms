/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Method -1 (Brute Force -Linear Search)

#include<bits/stdc++.h>
using namespace std;

// Sum of all Submatrices from a given Matrix

// Method -1 (Brute Force -Linear Search)
// Time Complexity - O(n^6) [Very Bad Approach]

void subarraySum (int a[1000][1000], int n){

    int sum = 0;
    //loop for finding top left element:
    // left index
    for(int li=0;li<n;li++){
        for(int ji=0;ji<n;ji++){

            //loop for finding bottom right element: 
            // right index
            for(int bi=li;bi<n;bi++){
                for(int bj=ji;bj<n;bj++){

                    //loop for finding sum in each submatrix
                    for(int i=li ; i<=bi ;i++){
                        for(int j=ji ; j<=bj ; j++){
                             sum += a[i][j];
                        }
                    }
                }
            }
        }
    }

    cout<<sum<<endl;
}

int main(){

    int a[1000][1000] = {{1,1},{1,1}};

    subarraySum(a,2);
    return 0;

}
