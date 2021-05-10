#include<bits/stdc++.h>

using namespace std;

int getKSmallest(int* a, int n, int k){

    // here we use Max Heap for finding kth Smallest Element
    priority_queue<int> maxHeap;
    for(int i=0;i<n;i++){
        // enter all array elements into PQ
        maxHeap.push(a[i]);
        // now check : if the size of heap is greater than out k value or not
        // if size is greater than pop extra elements
        // otherwise keep on pushing
        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }
    // now at last the top element will be the kth Smallest element
    return maxHeap.top();
}

int getKLargest(int* a, int n, int k){

    // here we use Min Heap for finding kth Largest Element
    priority_queue <int, vector <int>, greater <int>> minHeap ;  // syntax for writing Min Heap
    for(int i=0;i<n;i++){
        // enter all array elements into PQ
        minHeap.push(a[i]);
        // now check : if the size of heap is greater than out k value or not
        // if size is greater than pop extra elements
        // otherwise keep on pushing
        if(minHeap.size() > k){
            minHeap.pop();
        }
    }
    // now at last the top element will be the kth Largest element
    return minHeap.top();
}




int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;

    cout<<"Kth Smallest Element : "<<getKSmallest(a,n,k)<<endl;
    cout<<"Kth Largest Element  : "<<getKLargest(a,n,k)<<endl;
    return 0;
}
