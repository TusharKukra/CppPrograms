#include<bits/stdc++.h>
using namespace std;

// Linked List

class node{
public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;  // constructor

    }

};

// inserting at Front
void insertAtFront(node* &head, int d){  // call by reference
    
    node* n = new node(d); // new node dynamically

    // if the LL is empty
    if(head == NULL){
        head = n;
    }
    else{
        // if we have a LL
        n -> next = head;
        head = n;
    }
}

//Reverse the linked List
node* ReverseLinkedList (node* &head){
    // for reversing Linked List : we need 3 pointers 
    node* previous = NULL;
    node* currentPointer = head;
    node* nextPointer;

    while(currentPointer != NULL){
        // initialize the next pointer
        nextPointer = currentPointer -> next;

        // now change the link of currentPointer
        currentPointer -> next = previous;

        // now move forward 1 step
        previous = currentPointer;
        currentPointer = nextPointer;
    }

    return previous; // our new head.s
}

// for printing Linked List
void Print(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp = temp->next; // our new head
    }
    cout<<"NULL"<<endl;
}


int main(){

    node* head;

    head =  NULL;

    insertAtFront(head, 1);
    insertAtFront(head, 2);
    insertAtFront(head, 3);
    insertAtFront(head, 4);

    Print(head);
    cout<<endl;

    node* newHead = ReverseLinkedList(head);
    Print(newHead);


    return 0;
}
