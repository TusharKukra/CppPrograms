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

// Insertion at Middle 
void insertAtMid(node* &head , node* &tail, int d, int pos){
    if(pos==0){
        insertAtFront(head,tail,d);
    }
    else if(pos >= lengthOfLL(head)){
        insertAtEnd(head, tail, d); // if you reach at the end or go beyond then insert at the end of LL.
    }
    else{
        node* temp = head;  // firstly point temp to the head then using loop , go to the required position
        for(int i=1;i<pos;i++){
            temp = temp -> next;  // shift the temp according to the position
        }
        node* n = new node(d);  // then create new node which u want to insert
        n -> next = temp -> next;
        temp -> next = n; 
    }
}

// Search a Node Recursively:
bool searchRecursively(node* head, int key){
    
    // just check for 1st node then use recursion for remaining

    // base case:
    if(head == NULL){
        return false;
    }

    // recursive case: 
    if(head -> data == key){
        //cout<<"Key is Present"<<endl;
        return true;
    }
    else{
        return searchRecursively(head->next, key);
    }
}

// Deletion at front : 

void deleteAtFront (node* &head , node* &tail){
    // move head to the next (dont do this bcoz this will led to Memory Leak)

    // so we use temp pointer and then move head forward
    if(head == NULL){
        // if LL is not present
        return;
    }

    if(head -> next == NULL){  // if only 1 node is present
        delete head;
        head = tail = NULL;
    }

    else{
    node* temp = head;  // firstly point temp pointer to the head
    head = head -> next;  // then move head to the next node
    delete temp;
    }
}


// Delete at End :

void deleteAtEnd (node* head, node* tail){

    if(head == NULL){  //if LL is empty
        return ;
    }

    if(head -> next == NULL){
        // if there is only one Node
        delete head;
        head = tail = NULL;
    }

    else{
        node* temp = head; // we create a temporary pointer which is pointing to head

        while(temp -> next != tail){ 
            temp = temp -> next; // move till u reach at the end
        }

        delete tail;
        tail = temp;
        tail -> next = NULL; 
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

// Delete from Middle of LL :

void deleteFromMid (node* &head, node* &tail, int pos){

    if(pos == 0){
        deleteAtFront(head, tail) ;
    }

    else if(pos == lengthOfLL(head)-1){
        deleteAtEnd(head, tail);
    }

    else if(pos >= lengthOfLL(head)){
        return;
    }

    else{
        node* temp = head;
        for(int i=1;i<pos;i++){
            temp = temp -> next;
        }

        node* t1 = temp -> next;
        temp -> next = t1 -> next;
        delete t1;
    }

}


/////////////////////////////////////////////////////////////////////////////////////////////////////


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

    deleteAtFront(head, tail);
    deleteAtFront(head, tail);

    deleteAtEnd(head, tail);

    print(head);

    deleteFromMid(head, tail, 2);
    print(head);
    
    cout<<lengthOfLL(head)<<endl;

    bool ans = searchRecursively(head, 19);

    if(ans){
        cout<<"Key found";
    }
    else{
        cout<<"Key not found";
    }



    return 0;
}
