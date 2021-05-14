// Stack QPS

#include<bits/stdc++.h>
using namespace std;

/*
Stock Span problem is a financial problem where we have a series of N daily price quotes for a stack
and we need to calculate span of stock's price for all N days. You are given an array of length N, where
ith element of array is the price of Stock on ith. Find the span of stock's price on ith day for every 1<=i<=N.

A span of stock's price on a given day i, is the max num of consecutive days before the (i+1)th day for which stock's price on these days is less than or equal to that on the ith day

I/P : 5 30 35 40 38 35
O/P : 1 2 3 1 1 END

*/

int main(){

    int n;
    cin>>n;

    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }

    vector<int> out(n);
    stack<int> stack;
    for(int i=0;i<prices.size();i++){
        while(!stack.empty() && prices[stack.top()] <= prices[i]){
            stack.pop();
        }

        out[i] = stack.empty() ? i+1 : i-stack.top();
        stack.push(i);
    }

    for(int i=0;i<out.size();i++){
        cout<<out[i]<<" ";
    }
    cout<<"END";

    return 0;
}
