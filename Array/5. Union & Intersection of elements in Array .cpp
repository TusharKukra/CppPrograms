// Method -1 (Brute Force)

#include<bits/stdc++.h>

using namespace std;

/*
Union of Two Arrays 

Approach : Brute Force 
            By traversing both the arrays using two pointers and compare their values

*/

void unionOfArrays(int* a, int* b, int n, int m){

    // creating two pointers
    int i=0, j=0;

    while(i<n && j<m){  // i pointed to a & j pointed to b

        if(a[i] < b[j]){
            cout<<a[i]<<" ";
            i++;
        }

        else if(a[i] > b[j]){
            cout<<b[j]<<" ";
            j++;
        }

        else{  // if both elements are equal
            cout<<b[j]<<" ";
            i++;
            j++;
        }
    }

    // print remaining elements of the larger array
    while(i<n){
        cout<<a[i++]<<" ";
    }
    while(j<m){
        cout<<b[j++]<<" ";
    }
}

int main(){

    int n,m;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int* b = new int[m];
    for(int j=0;j<m;j++){
        cin>>b[j];
    }

    unionOfArrays(a,b,n,m);
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Method -2 (Using Set)
#include<bits/stdc++.h>

using namespace std;

/*
Union of Two Arrays 

Approach : Using Sets
*/

void unionOfArrays(int* a, int* b, int n, int m){

    //create set container 
    set<int> s;

    // insert elements of both arrays into set
    // 1. for array a
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    } 

    // 2. for array b
    for(int j=0;j<m;j++){
        s.insert(b[j]);
    } 

    // Set will automatically remove duplicates from both arrays

    // for printing: we use iterator

    for(auto it = s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
    }

    // for printing number of elements in the final set
    cout<<endl;
    cout<<"Total no. of elements after union : "<<s.size();

}

int main(){

    int n,m;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int* b = new int[m];
    for(int j=0;j<m;j++){
        cin>>b[j];
    }

    unionOfArrays(a,b,n,m);
    return 0;
}
