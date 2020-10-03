#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(a[0]);
    priority_queue<int , vector<int>, greater <int>> minHeap;
    int cost=0;
    for(int i=0;i<n;i++){
        minHeap.push(a[i]);
    }

    while(minHeap.size()>=2){

        int first= minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();
        cost= cost+first+second;
        minHeap.push(first+second);

    }
    cout<<cost;
    return 0;

}
