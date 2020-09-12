#include<iostream>
#include<cstring>
using namespace std;
int main()
{ char str1[20],str2[20];
int i,j,len1,len2,len,flag=0;
cout<<"enter 1st string \n";
cin>>str1;
cout<<"enter 2nd string \n";
cin>>str2;

len1=strlen(str1);
len2=strlen(str2);
 if(len1==len2)
 { len=len1;
     for(i=0;i<len;i++)
     {

         for(j=0;j<len;j++)
         {
             if(str1[i]==str2[j])
             {
                 flag=1;

                 break;
             }
         }
         if(flag==0)
            break;

     }if(flag==1)
    cout<<"anagrams \n";
else cout<<" length is only same \n";

 }

else
    cout<<"\n not anagrams";
    return 0;
}
