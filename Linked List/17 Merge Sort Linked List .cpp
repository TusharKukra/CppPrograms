#include<bits/stdc++.h>
using namespace std;

/*
Suppose we have 2 sorted Linked List : 
    1 --> 4 --> 6 -->8

    2 --> 3 --> 5 --> 7 --> 9

We have to merge them to get: 

1 --> 2 --> 3 --> 4 --> 5 --> 6 --> 7 --> 8 --> 9

(New list creation is not Allowed)
*/


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


node* mergingTwoLL(node* head1, node* head2){
    //Base Cases: 
    if(head1==NULL){
        // if 1st LL is empty
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }




    // Recursive Cases :
    node* newHead;
    // new head will point to the smaller head
    // now compare heads of both LL
    if(head1->data < head2->data){
        newHead = head1;

        node* chotaHead =  mergingTwoLL(head1->next , head2);  // recursion
        newHead->next = chotaHead;
    }
    else{
        newHead = head2;
        node* chotaHead = mergingTwoLL(head1, head2->next); // recursion
        newHead->next = chotaHead;
    }

    return newHead;
}

node* mid(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	node* slow = head;
	node* fast = head -> next;
	while (fast != NULL and fast -> next != NULL) {
		fast = fast -> next -> next;
		slow = slow -> next;
	}
	return slow;
}

//////////////////////////////////////////////////////////////////

node* mergeSortLinkedList(node* head){
    // firstly divide it into 2 parts (by finding middle element)

    // Base Case: 
    if(head == NULL || head->next == NULL){
        return head;
    }

    // Recursive Case:
    node* m = mid(head);

    // 1. Divide the Linked List
    node* a = head; // Left Linked List
    node* b = m->next;  // Right Linked List
    
    m->next = NULL;

    // 2. Sort (Left LL and Right LL)
    a = mergeSortLinkedList(a);
    b = mergeSortLinkedList(b);

    // 3. Merge
    node* newHead = mergingTwoLL(a,b);
    return newHead;
}

//////////////////////////////////////////////////////////////////

int main(){
    node* head1, *head2;
    head1 = head2 = NULL;

    insertAtEnd(head1, 19);
    insertAtEnd(head1, 13);
    insertAtEnd(head1, 5);
    insertAtEnd(head1, 9);
    insertAtEnd(head1, 1);
    insertAtEnd(head1, 3);

    printLL(head1);

    insertAtEnd(head2, 0);
    insertAtEnd(head2, 2);
    insertAtEnd(head2, 4);
    insertAtEnd(head2, 6);
    insertAtEnd(head2, 8);

    // printLL(head2);

    /* node* newHead = mergingTwoLL(head1, head2);

    printLL(newHead); */

    head1 = mergeSortLinkedList(head1);

    printLL(head1);    
    return 0;
}
