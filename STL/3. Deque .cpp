#include<iostream>
#include<deque>

using namespace std;

int main(){

    // Deque : Doubly Ended Queue (we can insert or delete from front and back both directions), it is dynamic just like Vector

    deque <int> d;
    d.push_back(1);  // inserting from end
    d.push_front(2);   // inserting from front

    for(int i:d){
        cout<<i<<" ";
    }    
    cout<<endl;

    d.pop_back();  // deleting from back
    for(int i:d){
        cout<<"After doing pop from back: "<<i<<" ";
    } 
    cout<<endl;

    d.push_back(1); // again inserting from back
    
    d.pop_front();  // deleting from front
    for(int i:d){
        cout<<"After doing pop from front: "<<i<<" ";
    } 
    cout<<endl;
    d.push_front(3);
    d.push_front(4);
    d.push_back(5);
    
    cout<<"Print 1 index element: "<<d.at(1)<<endl;
    cout<<"Print first element: "<<d.front()<<endl;
    cout<<"Print last element: "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

    // erasing elements over a range
    cout<<"Before erase size: "<<d.size()<<endl;

    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase 1 element (size): "<<d.size()<<endl;
    
    // there is difference b/w size() & max_size()
    // size() will decreases if you pop elements but max_size() remains same (as what you initialized at starting) till end.
    
    return 0;
}
