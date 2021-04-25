#include<bits/stdc++.h>
using namespace std;

// Finding Last kth Element : (Not allowed to calculate length of LL)

class node{
public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }

};

void insertAtEnd(node* &head, int d){
    node* n = new node(d);

    if(head==NULL){
        head = n;
    }
    else{
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
}

void printLL(node* head){
    while(head!=NULL){
        cout<<head->data<<" --> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

//////////////////////////////////////////////////////////////////

node* kthFromEnd(node* head, int k){

    // here we take 2 pointers : slow and fast
    // put slow and fast at head

    // then move the fast pointer k step ahead of slow
    // and then move them together 1-1 step till fast reaches end of LL
    // so, when fast reaches at the end of LL , then slow will be k step back of the fast pointer

    // hence we return slow pointer for getting our kth element from last.
    node* s, *f;
    s=f=head;

    while(k--){
        // while k is there i need to move
        f = f->next;
    }

    while(f != NULL){
        f = f->next;
        s = s->next;
    }

    return s;
}

//////////////////////////////////////////////////////////////////
int main(){
    node* head;
    head = NULL;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);

    printLL(head);
    node* lastkth = kthFromEnd(head, 2);
    cout<<"Kth from last : "<<lastkth->data<<endl;

    return 0;
}
