// Problem - https://www.interviewbit.com/problems/sort-list/
--------------------------------------------------------------
ListNode* mergeList(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* temp = dummy;
    
    while(l1 && l2) {
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
    while(l1) {
        temp->next = l1;
        temp = temp->next;
        l1 = l1->next;
    }
    while(l2) {
        temp->next = l2;
        temp = temp->next;
        l2 = l2->next;
    }
    
    temp->next = NULL;
    return dummy->next; 
}
ListNode* Solution::sortList(ListNode* head) {
    if(!head || !head->next) return head;
    
    ListNode *slow = head, *fast = head->next;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* temp = slow->next;
    slow->next = NULL;
    
    ListNode* l1 = sortList(head);
    ListNode* l2 = sortList(temp);
    ListNode* sl = mergeList(l1, l2);
    return sl;
}
