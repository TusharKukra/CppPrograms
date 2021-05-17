// Statement :
Given 3 strings ,the task is to find the longest common sub-sequence in all three given sequences.

Input Format
First line contains first string . Second line contains second string. Third line contains the third string.

Constraints
The length of all strings is |s|< 200

Output Format
Output an integer denoting the length of longest common subsequence of above three strings.

Sample Input
GHQWNV
SJNSDGH
CPGMAH
Sample Output
2
Explanation
"GH" is the longest common subsequence

// Code : 

#include<bits/stdc++.h>
using namespace std;
long long dp[201][201][201];
string s1,s2,s3;
long long LIS(int n1,int m1,int o1,int n,int m,int o){
   if(n1>=n || m1>=m ||o1>=o)
     return 0;
   else if(dp[n1][m1][o1]!=-1)
        return dp[n1][m1][o1];
   else{
       long long ans=-1;
    if(s1[n1]==s2[m1] && s2[m1]==s3[o1])
        ans=1+LIS(n1+1,m1+1,o1+1,n,m,o);
    else
        {ans=max(ans,LIS(n1+1,m1,o1,n,m,o));
        ans=max(ans,LIS(n1,m1+1,o1,n,m,o));
        ans=max(ans,LIS(n1,m1,o1+1,n,m,o));}
        dp[n1][m1][o1]=ans;
        return dp[n1][m1][o1];
   }
}
int main(){
memset(dp,-1,sizeof(dp));
cin>>s1>>s2>>s3;
cout<<LIS(0,0,0,(int)s1.size(),(int)s2.size(),(int)s3.size());

}
