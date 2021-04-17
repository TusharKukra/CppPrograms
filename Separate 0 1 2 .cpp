/*
Given a list A of integer numbers that have value coming from SET = {0,1,2}. The task is to 
Put all 1's , first then all 0's and all 2's at the last .

Example: List A[] = {0,1,2,0,1,2}
          OUTPUT : 1 1 0 0 2 2
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int one=0;
    int zero=0;
    int two=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp==0)
            zero++;
        else if(temp==1)
            one++;
        else
            two++;
    }
    for(int i=0;i<one;i++)
        cout<<"1 ";
    for(int i=0;i<zero;i++)
        cout<<"0 ";
    for(int i=0;i<two;i++)
        cout<<"2 ";
}
