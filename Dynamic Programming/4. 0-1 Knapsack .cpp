// Statement :
You are packing for a vacation on the sea side and you are going to carry only one bag with capacity S (1 <= S <= 1000). You also have N (1<= N <= 1000) items that you might want to take with you to the sea side. Unfortunately you can not fit all of them in the knapsack so you will have to choose. For each item you are given its size and its value. You want to maximize the total value of all the items you are going to bring. What is this maximum total value?

Input Format
On the first line you are given N and S.
Second line contains N space separated integer where ith integer denotes the size of ith item. Third line contains N space seperated integers where ith integer denotes the value of ith item.

Constraints
1 <= S,N <= 1000

Output Format
Output a single integer showing the maximum value that can be obtained by optimally choosing the items.

Sample Input
5 4
1 2 3 2 2 
8 4 0 5 3
Sample Output
13
Explanation
Total capacity = 4.
Pick size 1 with value 8 and size 2 with value 5.
  
// Code :
  
#include<bits/stdc++.h>
using namespace std;

int knapsack(int arr[10000],int n,int s,int values[10000])
{
    int dp[10000];
    for(int i=0;i<n;i++)
    {
        for(int j=s;j>=arr[i];j--)
        dp[j]=max(dp[j],dp[j-arr[i]]+values[i]);
    }
    return dp[s];
}
int main()
{
    int n;
    cin>>n;
    int arr[n],values[n];
    int s;
    cin>>s;
      
 for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
   
 for(int i=0;i<n;i++)
    {
        cin>>values[i];
    }
    cout<<knapsack(arr,n,s,values)<<endl;
}
