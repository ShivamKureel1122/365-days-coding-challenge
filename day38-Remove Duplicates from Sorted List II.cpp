// Problem - https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list-ii/
------------------------------------------------------------------
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* dummy = new ListNode(0);
    dummy->next = A;
    ListNode *prev = dummy, *curr = dummy->next->next;
    
    while(curr != NULL) {
        if(prev->next->val != curr->val) {
            prev = prev->next;
            curr = curr->next;
        } 
        else {
            while(curr && prev->next->val == curr->val) {
                curr = curr->next;
            }
            if(curr == NULL && prev->val == 0) return curr;
            prev->next = curr;
            if(curr) curr = curr->next;
        }
    }
    return dummy->next;
}
