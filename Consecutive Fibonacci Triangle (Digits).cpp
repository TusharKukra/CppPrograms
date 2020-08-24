#include <iostream>
using namespace std;
int main()
{
    cout << "Fibonacci Pyramid" << endl;
    
    int i,j,a=0,b=1,c,n;
    cout<<"Enter number of Lines: ";
    cin>>n;
    for(i=0;i<n;i++){

        for(j=0;j<i;j++){

            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;

        }

        cout<<endl;

    }
    return 0;
}
