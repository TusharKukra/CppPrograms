// Basic Method : 

#include<bits/stdc++.h>
using namespace std;

// Array Rotation

void leftRotateByOne(int *arr, int n){
    
    // first store the element into Temp variable and then shift the remaining Elements

    int temp = arr[0];

    // shifting
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];  // next element shifted to its 1 previous position
    }

    arr[n-1] = temp;
}

// now we have to run the above code d times i.e for how many positions we want to rotate our array
void rotateTheArray(int* arr, int n, int d){

    for(int i=0;i<d;i++){
        leftRotateByOne(arr,n);
    }
}

int main(){

    int n;
    cin>>n;

    int* arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int d;
    cin>>d;

    cout<<endl;
    rotateTheArray(arr,n,d);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}



// Method -2 (Juggling Method)
