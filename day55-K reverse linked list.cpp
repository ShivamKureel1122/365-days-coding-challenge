// Problem - https://www.interviewbit.com/problems/k-reverse-linked-list/
-------------------------------------------------------------------------
ListNode* reverse(ListNode* head, ListNode* temp) {
    if(head->next == temp) return head;
    
    ListNode* newNode = reverse(head->next, temp);
    head->next->next = head;
    head->next = NULL;
    return newNode;
}
ListNode* Solution::reverseList(ListNode* head, int B) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    
    ListNode *p1 = dummy, *p2 = dummy, *temp = dummy;
    
    while(p1->next) {
        int steps = B-1;
        while(p2 && steps) {
            p2 = p2->next;
            steps -= 1;
        }
        p1 = p1->next;
        p2 = p2->next;
        
        ListNode* ttemp = p2->next;
        temp->next = reverse(p1, ttemp);
        p1->next = ttemp;
        temp = p1;
        p2 = p1;
    }
    
    return dummy->next;
}
