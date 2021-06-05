// Quick Sort is one of the best Sorting Method

#include<bits/stdc++.h>

using namespace std;

int main(){

int n,pass,j,arr[100],temp;
cout<<"Enter total number of elements: ";
cin>>n;

cout<<endl<<"Enter elements: ";
for(pass=0;pass<n;pass++){
    cin>>arr[pass];
}

cout<<"Sorting array using Bubble Sort"<<endl;

for(pass=0;pass<(n-1);pass++){

    for(j=0;j<(n-1-pass);j++){

            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }


    }
}

	cout<<"Sorted list in ascending order: "<<endl;
	for(pass=0; pass<n; pass++)
	{
		cout<<arr[pass]<<" ";
	}
	return 0;
}
