#include<bits/stdc++.h>
using namespace std;

// Multiply two Strings

string multiplyString(string num1, string num2){

        if(num1.size()==0||num2.size()==0) return "";
        string ret(num1.size()+num2.size()+1,'0');
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        for(int i=0;i<num2.size();i++){
            int dig2=num2[i]-'0';
            int carry=0;
            for(int j=0;j<num1.size();j++){
                int dig1=num1[j]-'0';
                int temp=ret[i+j]-'0';
                int cur=dig1*dig2+temp+carry;
                ret[i+j]=cur%10+'0';
                carry=cur/10;
            }
            ret[i+num1.size()]=carry+'0';
        }
        reverse(ret.begin(),ret.end());
        int pos=ret.find_first_not_of('0',0);
        if(pos<0||pos>=ret.size())
            pos=ret.size()-1;
        return ret.substr(pos,ret.size()-pos);

}

int main(){

    string num1, num2;
    cin>>num1>>num2;

    if((num1.at(0) == '-' || num2.at(0) == '-') && (num1.at(0) != '-' || num2.at(0) != '-'))
    { 
        cout<<"-" ;
    }
    
    if(num1.at(0) == '-'){
        num1 = num1.substr(1);
    }

    if(num2.at(0) == '-'){
        num2 = num2.substr(1);
    }
    
    cout<<multiplyString(num1,num2);

    return 0;
}


// Better Approach : 

