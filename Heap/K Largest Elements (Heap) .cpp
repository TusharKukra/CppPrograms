#include<bits/stdc++.h>

using namespace std;

int main() {

	int a[] = {7,10,4,3,20,15};
	int size = sizeof(a)/sizeof(a[0]), k=3;

	priority_queue <int, vector <int>, greater <int>> minHeap ; //Min Heap
	for(int i=0;i<size;i++){
		minHeap.push(a[i]);
		if(minHeap.size()>k){
			minHeap.pop();
		}
	}
	while(minHeap.size()>0){
		cout<<minHeap.top()<<" ";
		minHeap.pop();
	}
	return 0;
}
