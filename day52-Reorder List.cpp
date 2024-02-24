// Problem - https://www.interviewbit.com/problems/reorder-list/
-----------------------------------------------------------
ListNode* reverse(ListNode* head) {
    if(!head->next) return head;
    
    ListNode* newHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return newHead;
}
ListNode* Solution::reorderList(ListNode* A) {
    if(!A || !A->next) return A;
    
    ListNode *slow = A, *fast = A->next;
    
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    ListNode* l1 = A;
    ListNode* l2 = reverse(slow->next);
    ListNode *dummy = new ListNode(0), *temp = dummy;
    slow->next = NULL;
    
    while(l1) {
        temp->next = l1;
        temp = temp->next;
        l1 = l1->next;
        
        if(l2) {
            temp->next = l2;
            temp = temp->next;
            l2 = l2->next;
        }
    }
    temp->next = NULL;
    
    return dummy->next;
}
