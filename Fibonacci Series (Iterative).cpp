#include <iostream>
using namespace std;

int main() {
	int a=0,b=1,c,i,n;
    cout<<"Enter number of Elements: ";
    cin>>n;
    
    cout<<a<<" "<<b<<" "; //Printing 0,1 (initial numbers as series starts from 0)
    for(i=2;i<n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

	return 0;
}
