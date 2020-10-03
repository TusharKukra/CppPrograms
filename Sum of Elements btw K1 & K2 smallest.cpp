#include<bits/stdc++.h>
using namespace std;

// Sum of numbers between K1th and K2th Smallest Numbers in an Array
int kSmallest(int a[], int n, int k)
{
    priority_queue <int> maxHeap;
    for(int i=0;i<n;i++)
    {
        maxHeap.push(a[i]);
        if(maxHeap.size()>k)
        {
            maxHeap.pop();
        }
    }
    return maxHeap.top();
    
}

int main(){
    int a[] = {1,3,12,5,15,11};
    int n= sizeof(a)/sizeof(a[0]);
    sort(a,a+1);
    int sum =0;
    int first = kSmallest(a,n,3);
    int second =kSmallest(a,n,6);
    for(int i=0;i<n;i++){
    if(a[i]>first && a[i]<second)
    {
        sum=sum+a[i];
    }

  }
  cout<<sum;

}
