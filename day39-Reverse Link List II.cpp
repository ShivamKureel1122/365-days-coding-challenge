// Problem - https://www.interviewbit.com/problems/reverse-link-list-ii/
---------------------------------------------------------------------
ListNode* reverseList(ListNode* head, ListNode* r) {
    ListNode *next = head, *prev = NULL, *curr = NULL;
    while(next != r) {
        curr = next;
        next = next->next;
        curr->next = prev;
        prev = curr;
    }
    head->next = r;
    return prev;
}
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode* dummy = new ListNode(0);
    dummy->next = A;
    ListNode *b = dummy, *c = dummy;
    
    while(C--) {
        if(B-- && B>0) {
            b = b->next;
        } 
        c = c->next;
    }
    
    b->next = reverseList(b->next, c->next);
    return dummy->next;
}
