// Linked List

#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

int lengthLL(node* head) {
	int cnt = 0;
	while (head) {
		cnt++;
		head = head->next;
	}
	return cnt;
}

void insertAtEnd(node* &head, int d) {
	node* n = new node(d);
	if (head == NULL) {
		head = n;
	}
	else {
		node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = n;
	}
}

void print(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////
// Finding Mid using Tortoise method
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
/////////////////////////////////////////////////////////////////////////////////////////////


void ReverseLL(node* &head) {
	node* previous = NULL;
    node* current = head;
    node* nextPointer;

	while (current != NULL) {
        // firstly initialize the nextPointer with the 
		nextPointer = current -> next;

        // then change the current pointer (shift back) to previous node
		current -> next = previous;

        // now move forward all 3 pointers 1 step
		previous = current;
		current = nextPointer;
	}
	head = previous;
}


int main() {
	node* head, *head1;
	head = head1 = NULL;

	insertAtEnd(head, 10);
	insertAtEnd(head, 3);
	insertAtEnd(head, 5);
	insertAtEnd(head, 60);
	insertAtEnd(head, 17);
	insertAtEnd(head, 7);
	insertAtEnd(head, 70);
	insertAtEnd(head, 20);

	print(head);

  ReverseLL(head);
  print(head);

	
	node* ans = mid(head);
	cout << "Middle element is " << ans->data << endl;

	
	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Linked List Programs

#include<bits/stdc++.h>
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

//Insert Element in End
void insertEnd(node* &head, int d){
    
    node* n = new node(d);  // create a new node

    // now see where u can place this node
    if(head == NULL){
        head = n;
    }
    else{
        node* temp = head;  // make a temp pointer
        // then traverse it till end of LL 
        while(temp -> next != NULL){  // till our temp pointer reaches end 
            // move 1 step ahead
            temp= temp->next;
        }

        // if it reaches end of the LL it moves out of the loop
        temp->next = n;
    }
}


//MIDDLE NODE in LL
node* middleNode(node* head){   // here we need to return the address (as the node is created dynamically) so we use node*

    if(head==NULL || head->next == NULL){
        return head;
    }

    node* slow = head;
    node* fast = head->next;

    while(fast->next != NULL && fast != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;

}

// Print the Node
void Print(node* head){
    while(head!=NULL){
        cout<<head->data<<" --> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}


int main(){

    node* head;
    head = NULL;

    insertEnd(head,1);
    insertEnd(head,2);
    insertEnd(head,3);
    insertEnd(head,4);
    insertEnd(head,5);
    insertEnd(head,6);
    Print(head);

    node* middle = middleNode(head);

    cout<<"Middle Element : "<< middle->data <<endl;  // here we use middle->data bcoz it will print the value of the element
    // if we use just middle in place of middle->data then it will print the address of the element.
 
    return 0;
}
