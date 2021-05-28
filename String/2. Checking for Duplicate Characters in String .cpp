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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Method -2 (Efficient Approach - O(nlogn)

#include<bits/stdc++.h>
using namespace std;

// Check Duplicate Elements : Better Approach (using Hash Map)

void checkDuplicates(string s){

    map<char, int> count;
    for(int i=0;i<s.length();i++){
        count[s[i]]++;  // firstly we store each and every character value into the count map
    }

    // now we traverse the map and look for the count value which is greater than 1 (i.e which character occurs more than once)
    for(auto it : count){
        if(it.second >1){  // it.second means our map stores 2 value : character and its integer count so we need integer value to check its occurrence.
            cout<<it.first<<" occurs : "<<it.second<<" times."<<endl;
        }
    }

}

int main(){

    string s;
    getline(cin,s);

    checkDuplicates(s);

    return 0;
}
