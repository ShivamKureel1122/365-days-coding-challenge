// Problem - https://www.interviewbit.com/problems/rotate-list/
---------------------------------------------------------------
ListNode* Solution::rotateRight(ListNode* A, int k) {
    if(!A || !A->next) return A;
    int len = 1;
    ListNode *temp = A, *p = A;
    
    while(temp->next) {
        len++;
        temp = temp->next;
    }
    
    k = k % len;
    if(!k) return A;
    int steps = len - k - 1;
    
    while(steps--) 
        p = p->next;
        
    ListNode* newHead = p->next;
    p->next = NULL;
    temp->next = A;
    return newHead;
}
