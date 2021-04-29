// Linked List : Floyd Cycle Detection Algorithm

#include<bits/stdc++.h>
using namespace std;

// Here we take 2 pointers : slow / fast
// Slow moves 1 step
// Fast moves 2 steps

// if at a certain point of time both pointer meet then Cycle is present.

class node{
public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;  // constructor

    }

};

// inserting at End
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

void CreateCycle(node* head){
    node* temp = head;

    while(temp->next){  // make it to the last node
        temp = temp->next;

    }
    // 1st traverse the temp pointer to the last then make it to head.next.next (means create cycle on 3rd node)
    temp->next = head->next->next;
}

// if cycle is present , then break the cycle function 
void BreakTheCycle(node* head, node* fast){
    // here we take fast as a parameter , bcoz we will stop when cycle is there, so cycle is there when both ptr are equal so we can take any of them

    // make new pointer : previous and previous is placed 1 step behind the fast ptr
    node* slow = head;
    node* previous = head;

    while(previous->next != fast){
        previous = previous->next;
    }

    while(fast != slow){
        previous = fast;
        fast = fast->next;
        slow = slow->next;
    }
    previous->next  = NULL;
}


// now create a fxn to check cycle
bool isCycle(node* head){
    // create 2 pointers slow and fast
    node* slow, *fast;
    slow = fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        // if our both pointer meets at some point of time: then our LL is Cyclic
        if(slow == fast){
            BreakTheCycle(head,fast);
            return true;
        }
    }

    return false;
}



int main(){

    node* head;

    head =  NULL;

    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    insertAtEnd(head,7);
    insertAtEnd(head,8);

    Print(head);
    CreateCycle(head);
    if(isCycle(head)){
        cout<<"Cycle is Present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }

    // we can print the LL after breaking the cycle:
    Print(head);
    return 0;
}
