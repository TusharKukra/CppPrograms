#include<iostream>
#include<queue>

using namespace std;

int main(){

    // Priority Queue: Max Heap & Min Heap 
    // Max Heap: First element is always greatest
    // Min Heap: First element is always smallest

    priority_queue<int> maxHeap; // Max Heap Syntax

    priority_queue<int, vector<int>, greater<int> > minHeap;  // Min Heap Syntax

    // inserting elements
    maxHeap.push(1);
    maxHeap.push(2);
    maxHeap.push(3);
    maxHeap.push(4);
    maxHeap.push(5);
    cout<<"Size: "<<maxHeap.size()<<endl;

    // to print them : while traversing them till their length, print the top() element and then pop() it and again print top() till u reach end of the queue
    
    /*
    The code below will give us wrong output : bcoz maxHeap.size() will change after every pop
    So, to overcome this error, we store size of max Heap in a variable so that it will not change after every pop operation

    for(int i=0;i<maxHeap.size();i++){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }cout<<endl;

    */

   int sizeMaxHeap = maxHeap.size();  // now it will not change after every pop operation
   cout<<"Max Heap : ";
   for(int i=0;i<sizeMaxHeap;i++){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }cout<<endl;


    minHeap.push(4);
    minHeap.push(0);
    minHeap.push(3);
    minHeap.push(1);
    minHeap.push(2);

    int sizeMinHeap = minHeap.size();
    cout<<"Min Heap : ";
    for(int i=0;i<sizeMinHeap;i++){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }cout<<endl;
    
    cout<<"Empty or not: "<<minHeap.empty()<<endl; // it will give u 1 bcoz in previous steps we popped all the elements.

    return 0;
}
