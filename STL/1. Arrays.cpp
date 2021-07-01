#include<iostream>
#include<array>

using namespace std;

int main(){

    // basic array: 
    int arr[4] = {1,2,3};

    // using STL
    array<int,4> a = {1,2,3,4};  // array<dataType, size_of_array> name_of_array

    // methods :
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at position 2 : "<<a.at(2)<<endl;

    cout<<"Arrays is Empty or not: "<<a.empty()<<endl;

    cout<<"First Element: "<<a.front()<<endl;

    cout<<"Last Element: "<<a.back()<<endl;


     return 0;
}
