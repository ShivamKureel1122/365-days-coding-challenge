// Problem - https://www.interviewbit.com/problems/swap-list-nodes-in-pairs/
----------------------------------------------------------------
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode *dummy = new ListNode(0);
    dummy->next = A;
    ListNode *prev = dummy, *curr = NULL;
    
    while(prev->next != NULL && prev->next->next != NULL) {
        curr = prev->next->next;
        
        prev->next->next = curr->next;
        curr->next = prev->next;
        prev->next = curr;
        
        prev = curr->next;
    }
    return dummy->next;
}
