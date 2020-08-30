#include<bits/stdc++.h>

using namespace std;

void merge (int a[], int s, int e ){
    int mid = (s+e)/2;

    int i= s; //1st half of Array
    int j = mid+1; //2nd half of Array
    int k = s;   //Starting of Temp array

    int temp[100]; //Temporary Array which further used to copy the result 


    while(i<=mid && j<= e){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }

    //Now if our half Array (1st half or 2nd half) is completed or filled in Temporary Array 
    //Then just write the other half array as it is (bcoz it is already sorted)
    while (i<=mid){
         temp[k++]=a[i++];
    }

    while(j<=e){
        temp[k++]=a[j++];
    }

    //Now just copy all the elements of the Temporary Array to the Resultant Array

    for(int i=s;i<=e;i++){
        a[i]=temp[i];
    }
}

void mergeSort(int a[], int s, int e){

    if(s>=e){
        return;
    }
    
    //Now follow 3 Steps:
    //1. Divide
    int mid = (s+e)/2;

    //2. Recursively Sort both Arrays i.e (s,mid) & (mid+1,e)
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    //3. Merge the two Parts

    merge(a,s,e);

}

int main(){
    
    int a[100],n;
    cout<<"Enter number of Elements in Array: ";
    cin>>n;

    cout<<endl<<"Enter the Elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
