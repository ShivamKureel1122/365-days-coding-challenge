// Problem - https://www.interviewbit.com/problems/reverse-alternate-k-nodes/
---------------------------------------------------------------------
ListNode* reverselist(ListNode* head, ListNode* p2) {
    ListNode *thead = head, *curr = NULL, *prev = NULL;
    while(thead != p2) {
        curr = thead;
        thead = thead->next;
        curr->next = prev;
        prev = curr;
    }
    head->next = thead;
    return prev;
}
ListNode* Solution::solve(ListNode* A, int B) {
    ListNode* dummy = new ListNode(0);
    dummy->next = A;
    ListNode *p1 = dummy->next, *p2 = dummy, *ptr = dummy;
    
    while(p2->next != NULL) {
        int k = B;
        while(k--) {
            p2 = p2->next;
        }
        ptr->next = reverselist(p1, p2->next);
        p2 = p1;
        
        k = B;
        while(k-- && p2->next != NULL) {
            p2 = p2->next;
        }
        ptr = p2;
        p1 = p2->next;
    }
    
    return dummy->next;
}
