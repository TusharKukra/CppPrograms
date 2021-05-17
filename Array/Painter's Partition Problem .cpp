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


bool is_Answer(int * a,int n,int k,int ans){
    int sum=0;
    int no_of_painters=0;
    for(int i=0;i<n;i++){
        if(sum+a[i]<=ans){
            sum+=a[i];
        }
        else{
            no_of_painters++;
            if(no_of_painters>k)
            return false;
            sum=a[i];
        }
    }
    if(sum){
        no_of_painters++;
        if(no_of_painters>k)
        return false;
    }
    return true;
}

int main() {
    int k;
    int n;
    cin>>k>>n;
    int a[n],sum=0,Max=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        Max=max(Max,a[i]);
        sum+=a[i];
    }
    int si=Max,ei=sum;
    int ans=0;
    while(si<=ei){
        int mid=(si+ei)/2;
        if(is_Answer(a,n,k,mid)){
            ans=mid;
            ei=mid-1;
        }
        else
        si=mid+1;
    }
    cout<<ans<<endl;
	return 0;
}
