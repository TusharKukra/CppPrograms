#include<bits/stdc++.h>
using namespace std;

void binaryToDecimal (int n){

    while(n>0){
    int answer =0;
    int power = 1;
    int number;
    cin>>number;
    
    while(number>0){

        int remainder = number % 10;

        answer = answer + remainder * power;

        power = power * 2;

        number = number/10;
    }

    cout<<answer<<endl;
    n--;
   
    }
    
}

int main(){

    int n;
    cin>>n;

    binaryToDecimal(n);


    return 0;

}
