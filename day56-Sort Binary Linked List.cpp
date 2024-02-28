// Problem - https://www.interviewbit.com/problems/sort-binary-linked-list/
----------------------------------------------------------------
ListNode* Solution::solve(ListNode* A) {
    ListNode *dummy = new ListNode(0);
    dummy->next = A;
    ListNode *temp = dummy, *curr = NULL, *p = NULL;
    
    while(temp->next) {
        if(temp->next->val) {
            curr = temp->next;
            temp->next = curr->next;
            curr->next = p;
            p = curr;
        }
        else {
            temp = temp->next;
        }
    }
    
    temp->next = curr;
    return dummy->next;
}
