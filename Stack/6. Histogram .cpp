#include<bits/stdc++.h>
using namespace std;

// Histogram : You have given bars of Histogram, then u have to find the area of largest rectangle formed

/* 
Area = width * height
consider all possible widths, for each width find the largesst area rectangle

The max among all areas is our area.

So, there are nC2 possible widths.


*/

int largestRectangleArea(vector<int> &heights){
    int n = heights.size();
    vector<int> nsl(n);
    deque<int> stack;

    // for each element in heights, I want to find index of NSL
    for(int i=0;i<n;i++){
        while(!stack.empty() && heights[stack.back()] >= heights[i]){
            stack.pop_back();
        }

        nsl[i] = stack.empty() ? -1 : stack.back();
        stack.push_back(i);
    }

    // there is no guarantee the stack is empty
    while(!stack.empty()) stack.pop_back();
    vector<int> nsr(n);
    for(int i=n-1;i>=0;i--){
        while(!stack.empty() && heights[stack.back()] >= heights[i]){
            stack.pop_back();
        }

        nsr[i] = stack.empty() ? n : stack.back();
        stack.pop_back();
    }

    int maxArea = 0;
    for(int i=0;i<n;i++){
        maxArea = max(maxArea, (nsr[i]-nsl[i]-1)*heights[i]);
    }
    return maxArea;
}

int main(){

    int n;
    cin>>n;
    

    return 0;
}
