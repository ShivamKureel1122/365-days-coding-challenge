// Problem - https://www.interviewbit.com/problems/even-reverse/
----------------------------------------------------------------
ListNode* mergeList(ListNode* even, ListNode* odd) {
    ListNode* dummy = new ListNode(0);
    ListNode* ans = dummy;
    
    while(even && odd) {
        ans->next = even;
        ans = ans->next;
        even = even->next;
        
        if(odd) {
            ans->next = odd;
            ans = ans->next;
            odd = odd->next;
        }
    }
    
    while(even) {
        ans->next = even;
        ans = ans->next;
        even = even->next;
    }
    while(odd) {
        ans->next = odd;
        ans = ans->next;
        odd = odd->next;
    }
    
    return dummy->next;
}
ListNode* Solution::solve(ListNode* head) {
    ListNode *even = head, *odd = head->next;
    ListNode *temp = NULL, *oddHead = NULL;
    
    while(even && odd) {
        even->next = odd->next;
        odd->next = temp;
        temp = odd;
        
        even = even->next;
        oddHead = odd;
        if(even) odd = even->next;
    }
    
    return mergeList(head, oddHead);
}
