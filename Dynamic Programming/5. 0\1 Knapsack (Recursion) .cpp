#include<bits/stdc++.h>
using namespace std;

/* 
0/1 Knapsack :

    Example: 
    Input : wt[] : 1 2 3 2 2
            val[] : 8 4 0 5 3 
            w : 4
            n : 
            
    Output : 13
*/  

int KnapRecursive(vector<int> &prices, vector<int> &weights, int i, int w){

    // base case:
    if(i == prices.size() || w == 0){
        return 0;
    }

    // recursive case
    if(weights[i] > w){
        // exclude 
        return KnapRecursive(prices, weights, i+1, w);
    }    

    int skip = KnapRecursive(prices, weights, i+1, w);
    int take = prices[i] + KnapRecursive(prices, weights, i+1, w-weights[i]);
}

int main(){
    
    return 0;

}
