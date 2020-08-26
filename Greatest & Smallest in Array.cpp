#include<iostream>
using namespace std;

int main()
{
  int size,i,a[100],large,small;
  cout<<"Enter array size(max 100)\n";
  cin>>size;
   cout<<"Enter array elements \n";
   for(i=0;i<size;i++)
   {
       cin>>a[i];

   }
   large=a[0];
   small=a[0];
   for(i=0;i<size;i++)
   {
       if(large<a[i])
        large=a[i];
        if(small>a[i])
            small=a[i];

   }

cout<<"Largest no. in array = "<<large<<" & ";
cout<<"Smallest no. in array = "<<small;
    return 0;
}
