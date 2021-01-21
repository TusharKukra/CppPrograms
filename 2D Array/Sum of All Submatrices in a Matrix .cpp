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



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Method -2 (Efficient Method)

#include<bits/stdc++.h>
using namespace std;

// Sum of all Submatrices from a given Matrix

// Method -2 (Efficient Way to do it -in O(n^2))

int sumOfSubmatrix(int **arr, int n, int m){
    int sum =0 ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int tl = (i+1)*(j+1);
            int br = (n-i)*(m-j);
            sum+= (tl * br)*arr[i][j];
        }
    }
    return sum;
}

int main(int argc, char const *argv[]){

    int n,m;
    cin>>n>>m;
    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<sumOfSubmatrix(arr,n,m)<<endl;
    return 0;
}


