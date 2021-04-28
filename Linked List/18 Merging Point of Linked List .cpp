ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        ListNode* a = headA;
        ListNode* b = headB;
        
        while(a!=b){
            a = a==NULL ? headB : a->next;
            b = b==NULL ? headA : b->next;
        }
        return a;
    }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int intersection (node* &head1, node* &head2){
    // firstly find the length of both LL

    int l1 = length(head1);
    int l2 = length(head2);

    // now if the length of the Linked Lists are diff then we will start from the differnce of both Lengths in bigger LL

    // difference of both length of LL : 
    int d =0;  // for calculating difference

    node* ptr1;  // points to the larger length LL
    node* ptr2;  // points to the shorter length LL

    if(l1>l2){  // if 1st LL is larger then ptr1 points to the head1 (1st LL)
        d = l1 -l2;
        ptr1 = head1;
        ptr2 = head2;
    }

    else{  // if 2nd LL is larger then ptr1 points to the head2 (2nd LL)
        d = l2 -l1;
        ptr1 = head2;
        ptr2 = head1;
    }


    // now check the value of d (till it reaches 0)
    while(d){

        ptr1 = ptr1->next;  // move pointer 1
        // move till it becomes null
        if(ptr1 == NULL){
            return -1;
        }
        d--;
    }

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2){
            return ptr1->data;
        }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        
    }
    return -1;

}
