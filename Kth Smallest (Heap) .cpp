#include<bits/stdc++.h>

using namespace std;

int main() {

	int a[] = {7,10,4,3,20,15};
	int size = sizeof(a)/sizeof(a[0]), k=3;

	priority_queue <int> maxHeap ;
	for(int i=0;i<size;i++){
		maxHeap.push(a[i]);
		if(maxHeap.size()>k){
			maxHeap.pop();
		}
	}
	cout<<maxHeap.top();
	return 0;
}
