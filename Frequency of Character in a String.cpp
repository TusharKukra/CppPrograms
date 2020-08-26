#include <iostream>
#include<string>
using namespace std;
int main()
{
    string c;
   char check ;
   int count = 0,n;

   cout<<"Enter String: ";
   getline(cin,c);
   cout<<endl<<"Enter Character to find its frequency: ";
   cin>>check;

   for(int i = 0; c[i] != '\0'; ++i)
   {
       if(check == c[i]){
           count++ ;}


   }
   cout << "Frequency of " << check <<  " = " << count;
   return 0;
}
