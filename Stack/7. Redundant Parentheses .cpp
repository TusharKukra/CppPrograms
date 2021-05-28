#include<bits/stdc++.h>
using namespace std;

/* 
Given a string of balanced expression, find if it contains a redundant parentheses or not.

A set of parentheses are redundant if same sub-expression is surrounded by unnecessary or multiple brackets. Print 'Yes' if redundant else 'No'.

Note: Expression may contain '+', '*', '-' and '/' operators. Given expression is valid and there are no white spaces present.

Ex : 
Input : ((a+b))  Output : Yes
Input : (a+(b)/c)  Output : Yes
Input : (a+b*(c-d))  Output : No

*/

bool isRedundant(string expr){
    stack<char> stack;
    for(char ch : expr){
        if(ch == ')'){
            bool opFound = false;
            while(stack.top() != '('){
                char top = stack.top();
                stack.pop();
                if(top=='+' || top=='*' || top=='-' || top=='/')
                    opFound = true;
            }

            stack.pop(); // pop the opening bracket
            if(!opFound) return true;
        }
        else{
            stack.push(ch);
        }
    }
    return false;
}

int main(){
    string expr ("(a+b*(c-d))");

    // remove whitespaces
    expr.erase(remove(expr.begin(), expr.end(), ' '), expr.end());
    cout<<expr<<endl;

    isRedundant(expr) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    return 0;
}
