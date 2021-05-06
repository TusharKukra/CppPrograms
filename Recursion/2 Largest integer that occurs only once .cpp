#include<bits/stdc++.h>
using namespace std;

/*  
Given an array of integers A, return the largest integer that only occurs once.

If no integer occurs once , return -1.

Approach -1

*/

int largestUniqueNumberOne(int n, int* A){
    // sort the array
    sort(A, A+n, greater<int>());  // reverse sort

    for(int i=0;i<n;i++){
        if(i == n-1 || A[i] != A[i+1]){
            return A[i];
        }
        else{
            while(i < n-1 && A[i] == A[i+1]){
                i++;
            }
        }
    }
    return -1;
}

int largestUniqueNumberTwo(int n, int* A){
    unordered_map<int, int> map;
    for(int i=0; i<n; i++){
        if(map.find(A[i]) == map.end()){
            // A[i] is not present in the map 
            map[A[i]] = 1;
        }
        else{
            // A[i] is already present in the map
            map[A[i]]++;
        }
    }

    //for(auto p : map){
      //  cout<<p.first<<" "<<p.second<<endl;
    //}

    int ans = -1;
    for(auto p : map){
        if(p.second == 1){
            ans = max(ans, p.first);
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    int* A = new int[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    cout<<largestUniqueNumberOne(n,A)<<endl;    
    cout<<largestUniqueNumberTwo(n,A)<<endl;
    return 0;
}
