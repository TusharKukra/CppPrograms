#include <iostream>
using namespace std;

void fibb(int n){
 
static int a=0,b=1,c;
 if(n>0){
     c=a+b;
     a=b;
     b=c;
     cout<<c<<" ";
     fibb(n-1);
 }
 
}


int main() {
	int n;
	cout<<"Enter number of Elements: ";
	cin>>n;
	cout<<"Series: ";
	cout<<"0"<<" "<<"1"<<" ";
	
	fibb(n-2); //Bcoz Series starts from 2nd Number as first two numbers are 0 & 1.
	
	return 0;
}
