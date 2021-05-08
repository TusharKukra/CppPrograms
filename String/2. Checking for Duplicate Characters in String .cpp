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

// Duplicate characters in a String (using Hashing (maps))
void checkDuplicate(string a){
    
    map <char, int> cnt;
    for(int i=0; i<a.length();i++){
        cnt[a[i]]++;  // for every character in a string store its freq value in count
    }

    // then check for duplicate element : if for any character count value > 1 (i.e it is repeated character)
    for(auto it : cnt){
        if(it.second>1){
            cout<<it.first<<" : "<<it.second<<" times"<<endl;
        }
    }
}

int main(){

    string a;
    getline(cin,a);

    checkDuplicate(a);

    return 0;

}
