#include<iostream>
using namespace std;
int main(){
    int isPrime(int counter);
    int n;
    cout<<"Enter no. of rows";
    cin>>n;

    for(int i=0;i<n;i++){
        int counter=1;
        for(int j=0;j<=i;j++){
            while(!isPrime(counter)){
                counter++;
                }
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
    return 0;
}
int isPrime(int num){
    int result=1;
    for(int k=2;k<num;k++){
        if(num%k==0){
            result=0;
            break;
        }
    }
    if(result==1 || num==2 || num==1){
        return 1;
    }
    else{
        return 0;
    }
}
