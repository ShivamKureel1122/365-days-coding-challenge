// Problem - https://www.interviewbit.com/problems/partition-list/
-------------------------------------------------------------
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* lDummy = new ListNode(0);
    ListNode* rDummy = new ListNode(0);
    ListNode *l = lDummy, *r = rDummy, *temp = A;
    
    while(temp) {
        if(temp->val < B) {
            l->next = temp;
            l = l->next;
        }
        else {
            r->next = temp;
            r = r->next;
        }
        temp = temp->next;
    }
    
    l->next = rDummy->next;
    r->next = NULL;
    
    return lDummy->next; 

}
