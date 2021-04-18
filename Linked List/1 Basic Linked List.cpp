#include <iostream>
using namespace std;

/*
Linked List : collection of Nodes
Node = data + pointer (address)

we can create node using class bcoz we need to store 2 properties in it : data & address
*/

class node{
public:
    int data;
    node* next; //we take node here bcoz: when u know the address of that node only then u can go to the next node.
    // here we use node pointer bcoz in node we have both data & the address to the next node

    node(int d) : data(d), next(NULL){}  // create a constructor
    // this constructor will take a data d & it will assign data and next will do the initialization
    // we dont have anything inside the constructor bcoz we have done the initialization part.


    /* or we can create constructor like this also: 
        
        node(int d){
            data =d;
            next =NULL;
        }
        
    */
}; // this class is called self referential class 

int main(){

    // a and b are two objects in node class
    node a(1);
    node b(2);

    // now I want that a node should point b node .
    // we can do this by using address operator : a.next = &b;
    // and then if we do cout<<a.data; we get output : 1
    a.next = &b;
    cout<<a.data<<endl;  // O/P = 1

    cout<<(*a.next).data<<endl; // here we use dereferencing : i.e a.next -> data which is the data of next node i.e b node : o/p = 2
    // bcoz : a.next will give you the address of next node , & if we use * (deref) then we are accessing the next node (or next bucket) & by using .data we are accessing its data.
    // we can also use this (in place of dereferencing)
    cout<<a.next->data<<endl;

    // if we have another node : let node c(3);
    // then to access that we need : 
    // (*a.next).next or a.next -> next; 
    // and to get the value of data in that bucket/node: a.next -> next -> data;

    node c(3);
    b.next = &c;
    int cData = a.next -> next -> data;

    cout<<cData<<endl; // O/p : 3

    return 0;
}
