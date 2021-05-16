/*
Stack --Next Largest Element (Nearest Greater to Right) Problem : 

Problem: 
    We have given an array[] = 1 3 2 4
    Now we have to find greater element just right to the key element

    Let in above array we have given key = 3 now greater than 3 is 4 on its right side of array

    Or if we dont have any key, then we can find NGR of all the elements of the array

Approach:
    Brute Force : O(n^2)
    Stack Approach : O(n)

    Using Stack :
        
*/


// Method -1 (Brute Force)

#include <bits/stdc++.h>
using namespace std;
 
void printNextGreatest(int* a, int n){

    int next;
    for(int i=0;i<n;i++){

        next = -1;
        for(int j = i+1;j<n;j++){

            // compare every element
            // if we find any greater element on right then, initialize next with that value
            if(a[i] < a[j]){
                next = a[j];
                break;
            }
        }
        cout<<next<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    printNextGreatest(a,n);

    return 0;
}


// Method -2 (using Stack)
