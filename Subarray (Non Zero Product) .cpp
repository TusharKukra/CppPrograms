#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, count=0, max=0;
    cout<<"Enter number of Elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i] != 0)
        {
            count++;

            if(count>max)
            {
                max=count;
            }
        }

        if(a[i] == 0)
        {
            count=0;
        }
    }

    cout<<max<<endl;
    return 0;
}
