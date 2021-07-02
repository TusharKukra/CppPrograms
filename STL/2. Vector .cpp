#include<iostream>
#include<vector>

using namespace std;

int main(){

    // vector (Dynamic array : if we have vetor of size 3 and if we add 4th element then the vector will double its size to add the elements along with new element and will dump the old vector : new size : 6)
    vector<int> v;
    // now as we donot mention the size of above vector, so its size is 0 (we can check it using capacity fxn)
    cout<<"Size of v (initially): "<<v.capacity()<<endl;

    // pushing elements
    v.push_back(1);
    cout<<"Size of v (after inserting 1 element): "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size of v (after inserting 2 element): "<<v.capacity()<<endl;

    // now if we add another element : as the size was 2 then after pushing 1 more element, size becomes double
    v.push_back(3);
    cout<<"Size of v (after inserting 3 element): "<<v.capacity()<<endl;  // now size becomes 4
     
    cout<<"Element at index 2: "<<v.at(2)<<endl;
    
    cout<<"Front Element : "<<v.front()<<endl;
    
    cout<<"Back Element : "<<v.back()<<endl;

    v.push_back(4);

    v.pop_back();

    // now after poping : traverse the array
    cout<<"After pop: "<<endl;
    for(int it:v){
        cout<<it<<endl;
    }

    cout<<"Size before clear() operation: "<<v.size()<<endl;
    v.clear();

    cout<<"Size after clear() operation: "<<v.size()<<endl;
    
    // another ways of initialization
    vector<int> b(5,1); // here b(5,1) : size = 5 and intialize all the elements with 1
    for(int j:b){
        cout<<j<<endl;
    }

    // copy a vector into another vector
    vector<int> copy(b);
    for(int k:copy){
        cout<<k<<" ";
    }
    cout<<endl;

    return 0;
    }
