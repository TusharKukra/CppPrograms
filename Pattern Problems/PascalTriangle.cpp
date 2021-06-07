#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows"<<endl;
    cin>>n;
    int arr[n-1][n-1];
    int value=1;
    cout<<value<<endl;
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        
        cout<<arr[i][j]<<" ";}
        cout<<endl;
    }
    return 0;

}
