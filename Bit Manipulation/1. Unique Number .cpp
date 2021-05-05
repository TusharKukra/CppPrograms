#include<bits/stdc++.h>
using namespace std;

// Unique Number :  Given a List of numbers where every number occurs twice except one,
// Find that number.

// Eg. : 2 3 5 6 3 5 2 : in this array we have 6 as Unique number.

int main(){

    int n;
    cin>>n;

    int number;
    int answer = 0;  // initialize it with 0 then using Loop , do bitwise XOR of all numbers

    for(int i=0;i<n;i++){
        cin>>number;

        answer = answer ^ number;  // when we use Bitwise XOR , same numbers becomes 0 , hence we get our Unique number.
    }

    cout<<answer<<endl;

    return 0;
}
