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

#include <bits/stdc++.h>
using namespace std;
 
void printNextGreatestUsingStack(int* a, int n){

    stack<int> stack;

    // firstly, push the first element to stack
    stack.push(a[0]);

    // then iterate for rest of the elements
    for(int i = 1 ; i<n;i++){

        if(stack.empty()){
        stack.push(a[i]);
        continue;
    }

    /* if stack is not empty, then pop an element from stack.
        If the popped element is smaller than go to next, then
        i). print the element
        ii). keep popping while element are smaller & stack is not empty
    */
    while(stack.empty()== false && a[i] > stack.top() ){  // if stack is not empty & if the element we are on is greater than the top element of stack then print that element
        
        cout<<a[i]<<" ";
        stack.pop();  // and then pop the top of stack and then stack top become that entered element i.e a[i]
    } 

    // push next to stack so that we can find next greater for it
    stack.push(a[i]);

    }

    // if we cant find any greater element for the remaining elements, so print -1 for them
    while(stack.empty() == false){
        cout<<-1<<" ";

        stack.pop();
    }
}


int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    printNextGreatestUsingStack(a,n);

    return 0;
}
