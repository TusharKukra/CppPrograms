// Stack : (we can implement Stack using 2 DS, i.e Arrays & Linked List)

// Stack using Linked List :

#include<bits/stdc++.h>
using namespace std;

class stackNode{

public: 
    int data;
    stackNode* next;

    stackNode(int d){
        data = d;
        next = NULL;
    }
};


// now create a top pointer which initially points to NULL

stackNode* top = NULL;

int size =0; // initially size of stack = 0

// create operations for Stack 

// 1. Push Operation
void push(int x){
    stackNode* node = new stackNode(x);
    node->data = x;  // insert our x in node's data (new node which we created)

    node->next = top; // and the node's next will points to the top of stack
    
    // then new top becomes node
    top = node;
    // cout<<x<<"  is pushed into Stack"<<endl;
    size++;
}

// 2. isEmpty Function
bool isEmpty(){
    if(top == NULL && size == 0){
        return true;
    }
    else{
        return false;
    }
}

// 3. Pop Operation : Return top element from the Stack and move the top pointer to the second node of linked list or Stack.
void pop(){

    stackNode* temp;  // create a temporary node (we will delete it after poping)

    // checking underflow
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
        return;
    }
    else{
        // top assign into temp
        temp = top;

        // now after temp our new top element, assign second node to top
        top = top->next;   // here we are assigning our old top pointer to the second node which is top->next

        // now delete the connection b/w first & second node, so that our fist node becomes free and we can delete it after returning its value &
        // do above steps again for the rest of the stack
        temp->next = NULL;

        // now release the memory of the top node
        free(temp); 
    }
}

// 4. Peek Operation : Return the top element.
int peek(){

    // check for the empty stack, if stack is not empty then return the top element & if empty then exit the fxn
    if(!isEmpty()){
        return top->data;
    }
    else{
        exit(1);
    }
}

// 5. Display Stack (print the stack)
void display(){

    stackNode* temp;

    // check for stack underflow
    if(top == NULL){
        cout<<"Stack Underflow"<<endl;
        exit(1);
    }
    else{

        temp = top;
        while(temp!=NULL){

            cout<<temp->data<<" ";

            // move the temp pointer to next node
            temp = temp->next;
        }
    }
}

int main(){

    push(1);
    push(2);
    push(3);
    push(4);
    display();

    cout<<endl;
    cout<<"Top element : "<<peek()<<endl;

    pop();
    pop();
    display();

    cout<<endl;
    cout<<"After popping 2 elements from Stack, top element : "<<peek()<<endl;

    return 0;
}
