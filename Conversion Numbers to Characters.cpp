#include <iostream>
using namespace std;

int main() {
	// Conversion of Numbers to Characters
	
	int n,r,temp=0;
	cout<<"Enter any number: ";
	cin>>n;
	while (n>0){
	    r=n%10;
	    temp=temp*10 + r;
	    n=n/10;
	}
	n=temp;
	
	while(n>0){
	    
	    r=n%10;
	    switch(r){
	        
	        case 1: cout<<"One ";
	                break;
	         case 2: cout<<"Two ";
	                break;
	         case 3: cout<<"Three ";
	                break;
	         case 4: cout<<"Four ";
	                break;
	         case 5: cout<<"Five ";
	                break;
	         case 6: cout<<"Six ";
	                break;
	         case 7: cout<<"Seven ";
	                break;
	         case 8: cout<<"Eight ";
	                break;
	         case 9: cout<<"Nine ";
	                break;
	         case 0: cout<<"Zero ";
	                break;
	                
	        
	    }
	    n=n/10;
	    
	}
	return 0;
}
