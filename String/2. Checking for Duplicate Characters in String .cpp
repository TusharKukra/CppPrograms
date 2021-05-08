#include<bits/stdc++.h>
using namespace std;

// Duplicate characters in a String
void checkDuplicate(string a){
    for(int i=0;i<a.length();i++){
        for(int j = i+1; j<a.length();j++){
            if(a[i] == a[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}

int main(){

    string a;
    getline(cin,a);

    checkDuplicate(a);

    return 0;

}
