#include<bits/stdc++.h>
using namespace std;

// String Tokenization

int main(){

    char s[1000] = "C++ Programming Language";

    char *ptr = strtok(s," ");  // here we use space as a delimiter (i.e break the given string in the form of spaces , means whenever space comes make it a single string)
    cout<<ptr<<endl; // from this we get only first string 


    while(ptr != NULL){
        ptr = strtok(NULL, " ");  // from this we can get the remaining strings
        cout<<ptr<<endl;
    }


    return 0;
}
