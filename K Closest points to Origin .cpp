#include<bits/stdc++.h>
using namespace std;
#define n 4
int main(){

    int a[n][2]={{1,3},{-2,2},{5,8},{0,1}};
    int k = 2;

    priority_queue <pair<int , pair<int,int>>> maxHeap;

    for(int i=0;i<n;i++)
    {
        maxHeap.push({a[i][0] * a[i][0] + a[i][1] * a[i][1] ,{a[i][0], a[i][1]}});
        if(maxHeap.size()>k)
            maxHeap.pop();
    }

    while(maxHeap.size()>0)
    {
        pair<int,int> p = maxHeap.top().second; //This means it retrive the value of 2nd pair in the heap i.e a[i][0], a[i][1]
        cout<<p.first<<" "<<p.second<<endl; //USed to print that 2nd pair values which we stored in p
        maxHeap.pop();
    }
    return 0;

}
