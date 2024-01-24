// Problem - https://www.interviewbit.com/problems/merge-two-sorted-lists/
------------------------------------------------------------------
ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* head;
    if(l1->val < l2->val) {
        head = l1;
        l1 = l1->next;
    } else {
        head = l2;
        l2 = l2->next;
    }
    ListNode* temp = head; 
    while(l1 != NULL && l2 != NULL) {
        if(l1->val < l2->val) {
            temp->next = l1;
            temp = temp->next;
            l1 = l1->next;
        } else {
            temp->next = l2;
            temp = temp->next;
            l2 = l2->next;
        }   
    }
    (l1 == NULL) ? temp->next = l2 : temp->next = l1;
    return head;
}
