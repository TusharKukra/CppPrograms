#include<bits/stdc++.h>

using namespace std;

//This part is Sub Set sum Problem
bool subsetSum(int arr[], int n, int sum){

    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                t[i][j]=false;
            }
            if(j==0){
                t[i][j]=true;
            }

            if(arr[i-1]<=j){
                t[i][j]= t[i][j-arr[i-1]] || t[i-1][j];  //Choice Diagram: include or not include (if array element is less than or equal to the max weight)
            }

            if(arr[i-1]>j){
                t[i][j]=t[i-1][j];  //Choice (Not Included)
            }
        }
    }
    return t[n][sum];
}

//This part is partition function
bool partition(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n ; i++){
        sum+=arr[i];
    }
    if(sum%2 != 0)
        return false;
    

    if(sum%2 == 0)
        return subsetSum(arr,n,sum);
    
}

int main(){

    int arr[] = {1,5,11,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(partition(arr,n)==true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
