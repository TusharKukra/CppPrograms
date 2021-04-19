// Balanced Parentheses

#include <iostream>
#include <stack>
using namespace std;

/* Last opened bracket needs to be closed first 
 Eg: {a+(b+c)*d} : last bracket = ( , so it needs to closed first

 i.e LIFO Principle (Stack)
*/

bool balanced(char* a){
    stack<char> s;

    for(int i=0; a[i] ; i++){
        
        char ch = a[i];
        switch (ch)
        {
            case '(':
            case '{':
            case '[':
                s.push(ch);
                break;
            case ')': 
            if(s.empty() == true || s.top() != '('){
                return false;
            }
            s.pop();
            break;

            case '}': 
            if(s.empty() == true || s.top() != '{'){
                return false;
            }
            s.pop();
            break;

            case ']': 
            if(s.empty() == true || s.top() != '['){
                return false;
            }
            s.pop();
            break;

        }
    }
    if(s.empty()==true){
            return true;
        }
        else{
            return false;
        }
}


int main(){

    stack<int> s;
    char a[] = "{a+b*(c+d)+[e+f]*x}";

    if(balanced(a)){
        cout<<"Balanced Parentheses"<<endl;
    }

    else{
        cout<<"Not a Balanced Parentheses"<<endl;
    }


    return 0;
}
