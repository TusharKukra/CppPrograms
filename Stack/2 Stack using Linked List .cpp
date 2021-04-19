// Stack using LL

#include <iostream>
#include <vector>
using namespace std;

class node{
    public:

        int data;
        node* next;

        node(int d){
            data = d;
            next = NULL;
        }
};


class Stack{
    public:

        node* head;
        int cs;
        Stack(){
            head = NULL;
            cs =0;
        }

        void push(int d){
            // in this we need to do insertAtFront

            node* temp = new node(d);
            if(head == NULL){
                head = temp;
            }
            else{
                temp -> next = head;
                head = temp;
                cs++;
            }
        }

        void pop (){
            // in this we need to do deleteFromFront

            if(head == NULL){
                return;
            }
            node* temp = head;
            head = head -> next;
            delete temp;
        }

        int top (){
            return head -> data;
        }

        bool empty(){
            return head == NULL ? true : false;
        }

        int size(){
            return cs;
        }
};

int main(){

    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }   
 return 0;
}
