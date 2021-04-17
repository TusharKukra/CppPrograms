/*
Replacing like :
 0 -> 9
 1 -> 8
 2 -> 7 
 3 -> 6
 .
 .
 .
 9 -> 0
  
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
  int map[10];
  for(int i =0 ;i<=9;i++){
    map[i] = abs(9-i);
  }
  int n;
  cin >> n ;
  if(n < 0 || n > 1000000){
    cout <<"Wrong Input";
    return 0;
  }
  vector<int>v;
  while(n > 0){
    int d = n%10;
    v.push_back(map[d]);
    n/=10;
  }  
  int size = v.size();
  for(int i= size-1;i>=0;i--){
    cout << v[i];
  }
  return 0;
}
