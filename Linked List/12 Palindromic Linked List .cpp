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

// palindrome
bool isPalindrome(node* head){
    // check if LL is present or not and if it has only 1 node:
    if(head==NULL || head->next==NULL){
        return true;
    }

    node* slow =head, *fast = head;

    // find middle element
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next; // move 1 step
        fast = fast->next->next; //move 2 steps 
    }

    // reverse the 2nd half of list
    slow->next = ReverseLinkedList(slow->next);

    //move slow to right half 
    slow = slow->next;

    // check right half and left half
    while(slow!=NULL){
        // comparing values
        if(head->data != slow->data)    
            return false;
        
        head = head->next;
        slow = slow->next;
    }
    return true;
}

//////////////////////////////////////////////////////////////////////////////////////////

int main(){

    node* head;

    head =  NULL;

    int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		insertAtEnd(head,d);
	}

    int result = isPalindrome(head);

    if(result == 1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    


    return 0;
}
