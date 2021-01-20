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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Method -2 (by using Binary Search - efficient method (starting from the rightmost element))

#include<bits/stdc++.h>
using namespace std;

// Searching Element in a matrix (using Divide and Conquer)
// Time Complexity : O(n+m) 

// Start from top rightmost element

void search( int arr[][1000], int n, int m,  int key){

    int i=0;
    int j=m-1;

    while(i>=0 && i<n && j>=0 &&j<m){
        
        if(arr[i][j] == key){

            cout<<"Found at : ("<<i+1<<","<<j+1<<")";
            

        }

        else if(arr[i][j] > key){
            
            // it means if our top rightmost element is greater than key value
            // then shift to left side (left column) 
            
            j--;
        }

        else if(arr[i][j] < key){

            // it means if our element is smaller than key value
            // then shift to down side (down the row)

            i++;
        }



    }

    cout<<"Not found!!"<<endl; // if key is not present (or out of bound)


}

int main() 
{   
    
    int arr[1000][1000];
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    } 
    
    int key = 29;

   search(arr, n,m, key); 
   
    return 0; 
} 



 
