#include <bits/stdc++.h> 
using namespace std; 
  
int main(){

    int a[] = {5,6,7,8,9};
    int size = sizeof(a)/sizeof(a[0]);
    int x=7,k=3;

    priority_queue <pair <int,int>> maxHeap;  // Syntax of Heap while inserting two input values or a pair of values and the two values are :- Key Value , Element corresponding to that Key Value.

    for(int i=0;i<size;i++)
    {
        maxHeap.push({abs(a[i]-x) , a[i]}); //Pushing key value which is a[i]-x along with array element.

        if(maxHeap.size()>k)
        {
            maxHeap.pop();
        }

    }

    while(maxHeap.size()>0)
    {
        cout<<maxHeap.top().second<<" ";
        maxHeap.pop();
    }

    return 0;

}
