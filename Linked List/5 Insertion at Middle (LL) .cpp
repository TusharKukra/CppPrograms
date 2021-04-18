#include <iostream>
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

void insertAtFront(node* &head, node* &tail, int d){

    node* n = new node(d);  // here we create dynamic node , bcoz if it is dynamic then we'll use it outside of the scope of this function.
    
    if(head == NULL){
        // i.e Linked List is empty
        head = tail = n;
    }

    else{  // if nodes are there
        n -> next = head;  // i.e we are inserting at front of head node (as next node to n is head)
        head = n;  // and as we insert n in front of head , then n becomes the new head.
    }


}

void print(node* head){

    while(head!=NULL){
        cout<<head->data<<" --> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;

}

void insertAtEnd(node* &head, node* &tail, int d){

    node* n = new node(d);

    if(head==NULL){
        head = tail = NULL;
    }
    else{
        tail -> next = n;
        tail = n;
    }

}
// Finding Length of Linked List
int lengthOfLL(node* head){
    int count =0;
    while(head){
        count++;
        head = head -> next;
    }
    return count;

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Insertion at Middle 
void insertAtMid(node* &head , node* &tail, int d, int pos){
    if(pos==0){
        insertAtFront(head,tail,d);
    }
    else if(pos >= lengthOfLL(head)){
        insertAtEnd(head, tail, d); // if you reach at the end or go beyond then insert at the end of LL.
    }
    else{
        node* temp = head;
        for(int i=1;i<pos;i++){
            temp = temp -> next;
        }
        node* n = new node(d);  // create new node which u want to insert
        n -> next = temp -> next;
        temp -> next = n;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main(){

    node* head, *tail; 

    // or u can write as : node* head, *tail;

    head = tail = NULL;

    insertAtFront(head,tail,4);
    insertAtFront(head,tail,3);
    insertAtFront(head,tail,2);
    insertAtFront(head,tail,1);
    insertAtFront(head,tail,0);

    insertAtEnd(head, tail, 5);
    insertAtEnd(head, tail, 6);

    insertAtMid(head, tail, 19, 3);

    print(head);
    
    cout<<lengthOfLL(head);

    return 0;
}
