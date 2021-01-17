#include<bits/stdc++.h>
using namespace std;

// Piyush and Magical Park Problem

void magicalPark(char a[][100], int m, int n, int k, int s){

    //piyush get out of the park
    bool success = true;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char ch = a[i][j];

            //check

            if(s<k){
                success = false;
                break;
            }

            if(ch == '*'){
                s+=5;
            }

            else if(ch == '.'){
                s-=2;
            }

            else{
                break;
            }

            // we also loose 1 point when we move right except for the last column
            if(j != n-1){   // when column is not equal to the last column
                s--; 
            }
        }
    }

    if(success){
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}

int main(){

    int m,n,k,s;
    cin>>m>>n>>k>>s;

    char park[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>park[i][j];
        }
    }

    magicalPark(park,m,n,k,s);

    return 0;
}
