// Reverse Stack (Recursive Stack)

#include <iostream>
#include <stack>
using namespace std;

// using Recursion , reverse the stack

void PushAtBottom (stack<int> &s, int topElement){
    // Base Case :
    if(s.empty() == true){
        s.push(topElement);
        return;
    }

    //recursive case:
    int top = s.top();
    s.pop();
    PushAtBottom(s, topElement);
    s.push(top);
}


void ReverseStack (stack<int> &s){  // call by reference
    if(s.empty()){
        return;
    }
    
    int topElement  = s.top();
    s.pop();
    ReverseStack(s);
    PushAtBottom(s, topElement);
    
}

void PrintStack(stack<int> s){  //call by value
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
        cout<<endl;
}

int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"Stack Before Reverse : "<<endl;

    PrintStack(s);

    ReverseStack(s);
    
    cout<<"Stack After Reverse : "<<endl;

    PrintStack(s);

    return 0;
}
