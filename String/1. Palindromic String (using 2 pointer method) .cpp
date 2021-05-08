#include<bits/stdc++.h>
using namespace std;

// Palindromic String

bool isPalindromic(string a){
    int start = 0;
    int end = a.length() -1;

    while(start<end){
        if(a[start] != a[end]){
            return false;
        }
        start++, end--;
    }
    return true;
}

int main(){

    string a;
    cin>>a;

    if(isPalindromic(a)){
        cout<<"Yes, it is a Palindromic String"<<endl;
    }
    else{
        cout<<"No, it is not a Palindromic String"<<endl;
    }

    return 0;

}
