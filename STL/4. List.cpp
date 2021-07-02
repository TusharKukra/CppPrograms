#include<iostream>
#include<list>

using namespace std;

int main(){

    // List: (Doubly Linked List)
    list<int> l;

    // to copy:
    //list<int> copy(l);

    // initialize with elements and size:
    list<int> l2(5,100);

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    
    // erase
    //l.erase(l.begin(), l.end());
    l.erase(l.begin());
    cout<<"After erase : ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of List: "<<l.size()<<endl;

    cout<<"List L2: ";
    for(int i:l2){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}
