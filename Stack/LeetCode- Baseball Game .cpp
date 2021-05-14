// Stack QPS

#include<bits/stdc++.h>
using namespace std;

/*
Baseball Game Problem LeetCode :
    
*/

int calPoints(vector<string> &ops){

    stack<int> stack;
    int sum =0;
    for(string op : ops){
        if(op == "+"){
            // if +
            int x = stack.top(); stack.pop();
            int y = stack.top();
            stack.push(x);
            stack.push(x+y);
            sum+=stack.top();
        }
        else if(op == "D"){
            // D
            stack.push(2*stack.top());
            sum+=stack.top();
        }
        else if(op == "C"){
            // C
            sum-=stack.top();
            stack.pop();

        }
        else{
            stack.push(stoi(op));
            sum+=stack.top();
        }
    }

    /*int sum =0;
    while(!stack.empty()){
        sum+=stack.top();
        stack.pop();
    }*/
    
    return sum;
}

int main(){

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(i);
    }
   
    return 0;
}
