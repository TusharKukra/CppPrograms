#include<iostream>
using namespace std;

void Pascal(int n)
{

for (int i = 1; i<= n; i++)
{
    int C = 1; // used to represent C(line, i)
    for (int j = 1; j <= i; j++)
    {

        // The first value in a line is always 1
        cout<< C<<" ";
        C = C * (i- j) / j;
    }
    cout<<"\n";
}
}


int main()
{
    int n;
    cout<<"enter no. of rows \n";
    cin>>n;
    Pascal(n);

    return 0;
}
