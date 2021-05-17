// Statement :
Tughlaq introduces a strange monetary system. He introduces copper coins and each coin has a number written on it. A coin n can be exchanged in a bank into three coins: n/2, n/3 and n/4. A coin can also be sold for gold. One can get as much grams of gold as the number written on the coin. You have one copper coin. What is the maximum weight of gold one can get from it?

Input Format
The input file contains a single integer n, the number on the coin.

Constraints
0 <= n <= 1 000 000 000

Output Format
Print the maximum weight of gold you can get.

Sample Input
12
Sample Output
13

// Code :

#include<iostream>
#include<unordered_map>
#define ll long long
using namespace std;
ll int solve(ll int n,unordered_map<ll int,ll int>&dp)
{
	if(dp.count(n))
		return dp[n];
	if(n<12)
	{
		dp[n]=n;
		return dp[n];
	}
	//if(n%12==0)
	//{
		dp[n]=max(n,solve(n/2,dp)+solve(n/3,dp)+solve(n/4,dp));
		return dp[n];
	//}
		//dp[n]=n;
		//return dp[n];
}

int main()
{
	int n;
	cin>>n;
	unordered_map<ll int,ll int>dp;
	cout<<solve(n,dp);
}
