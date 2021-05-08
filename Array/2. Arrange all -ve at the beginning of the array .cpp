#include<bits/stdc++.h>
using namespace std;

// Move -ve numbers at the beginning of the array 

void moveNegative(int* a, int start, int end){
    
    while(start<=end){

        // check whether our both start & end elements are -ve
        if(a[start] < 0 && a[end] < 0){
            start++;  // move start pointer
        }

        // check if start element is +ve & end element is -ve
        else if(a[start] > 0 && a[end] < 0){
            // then swap them both, bcoz we want to move all -ve elements at the beginning of the array
            swap(a[start], a[end]);
        }

        // check if both the elements are +ve
        else if(a[start] > 0 && a[end] > 0){
            // move end pointer to the left
            end--;
        }

        else{
            start++;
            end--;
        }
    }
}

int main(){

    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    moveNegative(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;

}
