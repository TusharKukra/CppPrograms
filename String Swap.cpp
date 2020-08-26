#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1,str2;

    cout<<"Enter 1st string: ";
    cin>>str1;
    cout<<endl<<"Enter 2nd string: ";
    cin>>str2;
    cout<<endl<<endl<<"String before swapping \n";
    cout<<"String 1= "<<str1;
    cout<<"\nString 2= "<<str2;

str1.swap(str2);
cout<<"\n After Swapping";
cout<<"\n String 1 = "<<str1;
cout<<"\n String 2 = "<<str2;

return 0;
}
