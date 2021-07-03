#include<iostream>
#include<set>

using namespace std;

int main(){

    // Set : it will store all the unique elements, i.e if we enter same element 5 times , then it will print it only 1 time.
    
    // in this we cannot modify the element, we have to insert new element after deleting it.
    // Elements will get print in sorted order

    set<int> s;

    s.insert(1);
    s.insert(0);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    // now when we print above set, it comes out in ascending order

    cout<<"Set : ";
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;

    // now if we insert same elements again and again, then in return statement, it will ignore them and print them only once.
    s.insert(0);  // T.C : O(logN)
    s.insert(2);
    s.insert(0);
    s.insert(1);

    cout<<"Set after inserting same elements : ";
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;

    // erase operation
    //s.erase(s.begin());

    // s.erase(++s.begin()); // will erase 2nd element
    
    // if we want to erase another element of a certain index, then use iterator
    set<int>::iterator it = s.begin();

    for(int i=0;i<2;i++){
    it++; 
    }   //to point at 3rd element (i.e 2 in our case)
    s.erase(it);

    cout<<"After erasing element : ";
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;

    // Count operator: 
    cout<<"Count Operator (check whether this element (ex: 5) is present or not: "<<s.count(5)<<endl;

    // Find operator: it will give us the iterator of the given element if it is present in the set
    // to print iterator value : we need to make a iterator first

    set<int>::iterator it2 = s.find(4);
    //cout<<"Value present at iterator : "<<*it<<endl;
    // and if we want to print the element at that iterator : then
    for(auto it3 = it2; it3!=s.end();it3++){
        cout<<*it3<<" ";
    }cout<<endl;

    

    return 0;
}
