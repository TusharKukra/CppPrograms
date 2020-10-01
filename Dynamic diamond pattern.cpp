#include<iostream>

using namespace std;

int main()
{

    int sp,i,j,n;
    cout<<"Enter size: ";
    cin>>n;
    sp=n-1;
    for(i=0;i<n;i++)//loop for upper star pyramid
    {
        for(j=sp;j>=0;j--)//loop for space
        {
            cout<<" ";

        }
        for(j=0;j<=i;j++)//loop for star
        {
            cout<<"* ";
        }
        cout<<"\n";
        sp--;
    }
    sp=0;
    for(i=0;i<n;i++)//loop for lower inverse star pyramid
    {
        sp++;
        for(j=0;j<=sp;j++)//loop for space
        {
            cout<<" ";
        }
        for(j=n-i-2;j>=0;j--)//looop for star
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
