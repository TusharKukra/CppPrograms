#include<bits/stdc++.h>
using namespace std;

// InFix to PostFix : using Stack


// firtly check whether our pointer is at operator or not
bool isOperator(char ch){
    if(ch == '+' || ch== '-' || ch == '*' || ch == '/')  return true;
    return false;
}

int prec(char op){
    if(op == '+' || op == '-'){return 1;}
    if(op == '*' || op == '/'){return 2;}

    return -1;
}

vector<string> infixToPostfix(string infix){
   
    vector<string> postfix;

    stack<char> stack;

    for(int i=0;i<infix.length();i++){
        char ch = infix[i];
        if(isOperator(ch)){
            while(!stack.empty() && prec(ch) <= prec(stack.top())){
                char top = stack.top();
                postfix.push_back(string(1,top));
                stack.pop();
            }

            stack.push(ch);
        }

        else if(ch == ')'){
            
        }

        else if(ch == '('){
            stack.push(ch);
        }

        else{
            // ch is an operand, add it to postfix
            postfix.push_back(string(1,ch));
        }
    }

    while(!stack.empty()){
        char top = stack.top();
        postfix.push_back(string(1,top));
        stack.pop();
    }

    return postfix;

}


int main(){
    string infix("A+-B+-C");
    vector<string> postfix = infixToPostfix(infix);

    for(string item : postfix) cout<<item;
    cout<<endl;

    return 0;
}
