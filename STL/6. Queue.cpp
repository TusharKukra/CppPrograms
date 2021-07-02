#include<iostream>
#include<queue>

using namespace std;

int main(){

    // Queue: Based on FIFO Principle

    queue<string> q;

    q.push("A");
    q.push("b");
    q.push("C");
    q.push("D");
    q.push("e");
    
    cout<<"First element : "<<q.front()<<endl;
    cout<<"Size before pop: "<<q.size()<<endl;
    q.pop();

    cout<<"First element after pop: "<<q.front()<<endl;

    cout<<"Last element : "<<q.back()<<endl;
    
    cout<<"Size after pop: "<<q.size()<<endl;


    return 0;
}
