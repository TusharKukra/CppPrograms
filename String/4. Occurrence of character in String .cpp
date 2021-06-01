#include <bits/stdc++.h>
using namespace std;
 
// Program to find occurence of every character in string

void findOccurence(string s){

    // we use hash map
    map<char, int> count;

    // traverse the string
    for(int i=0;i<s.length();i++){

        count[s[i]]++;
    }

    // for printing
    for(auto it: count){
        if(it.second > 0){
        cout<<it.first<<" "<<it.second<<endl; }
    }
}

int main(){

    string s;
    cin>>s;

    findOccurence(s);

    return 0;
}
