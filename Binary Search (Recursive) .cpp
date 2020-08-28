#include<bits/stdc++.h>

using namespace std;

int binSearch(int arr[], int low, int high, int key){

if(high>low){
    int mid = low + (high-low)/2;

    if(arr[mid]==key){
        return mid+1;
    }

    if(arr[mid]>key){
        return binSearch(arr,low,mid-1,key);

    }
    if(arr[mid]<key){
        return binSearch(arr,mid+1,high,key);

    }
}
return -1;

}

int main(){
int n,i,key,arr[50];
    cout<<"enter array size \n";
    cin>>n;
   cout<<"enter elements \n";
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"enter key to be searched ";
   cin>>key;

    int result = binSearch(arr, 0, n - 1, key);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;

return 0;
}
