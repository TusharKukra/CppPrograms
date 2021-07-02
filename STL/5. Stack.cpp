#include<iostream>
#include<stack>

using namespace std;

int main(){

    // Stack : (Based on FILO/LIFO Principle)
    stack<string> s;
    
    s.push("ABC");
    s.push("Def");
    s.push("GhI");

    cout<<"Top Element: "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element after pop operation: "<<s.top()<<endl;

    cout<<"Size of Stack: "<<s.size()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;
    
    return 0;
}
