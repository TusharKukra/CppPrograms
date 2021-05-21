// Statement :
Given K painters to paint N boards where each painter takes 1 unit of time to paint 1 unit of boards i.e. if the length of a particular board is 5, it will take 5 units of time to paint the board. Compute the minimum amount of time to paint all the boards.

Note that:

Every painter can paint only contiguous segments of boards.
A board can only be painted by 1 painter at maximum.
Input Format
First line contains K which is the number of painters. Second line contains N which indicates the number of boards. Third line contains N space separated integers representing the length of each board.

Constraints
1 <= K <= 10
1 <= N <= 10
1<= Length of each Board <= 10^8

Output Format
Output the minimum time required to paint the board.

Sample Input
2
2
1 10
Sample Output
10

// Code :

#include<bits/stdc++.h>
using namespace std;

    /*
    Aggressive Cow 
    */
int numberOfPaintersRequierd(int N, int* boardLengths, int timeLimit){
    int numPainter = 1; // intitially i have only 1 painter
    int time= 0;

    for(int i=0;i<N;i++){
        time+=boardLengths[i];
        if(time > timeLimit){
            numPainter++;
            time = boardLengths[i];
        }
    }
    return numPainter;

}

int minTimeToPaint(int K, int N, int* boardLengths){

    int sum =0;
    int maxLen = 0;
    for(int i=0;i<N;i++){
        sum+= boardLengths[i];
        maxLen = max(maxLen, boardLengths[i]);
    }

    int s= maxLen;
    int e = sum;
    int ans;

    while(s<=e){
        int m = s+ (e-s)/2;
        if(numberOfPaintersRequierd(N,boardLengths,m) == K){
            // k painters can paint N boards in 'm' amount of time
            ans = m;
            e = m-1;
        }
        else{
            s = m+1;
        }
    }
    return ans;
}

    int main(){

            int K;
            cin>>K;
            
            int N;
            cin>>N;

            int* boardLengths = new int[N];
            for(int i=0;i<N;i++){
                cin>>boardLengths[i];
            }
            cout<<minTimeToPaint(K,N,boardLengths)<<endl;
        
        return 0;
    }
