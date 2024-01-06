// Problem - https://www.interviewbit.com/problems/intersection-of-linked-lists/
----------------------------------------------------------------------------------
ListNode* intersectionBegins(ListNode* head1, ListNode* head2, int diff) {
    while(diff) {
        diff--;
        head1 = head1->next;
    } 
    while(head1 != NULL && head2 != NULL) {
        if(head1 == head2) return head1;
        head1 = head1->next;
        head2 = head2->next;
    } return NULL;
}
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {  
    ListNode *temp1 = A, *temp2 = B;
    int count1 = 0, count2 = 0;
    while(temp1 != NULL) {
        count1++;
        temp1 = temp1->next;
    }
    while(temp2 != NULL) {
        count2++;
        temp2 = temp2->next;
    } 
    if(count1 > count2) 
        return intersectionBegins(A, B, count1 - count2);
    else 
        return intersectionBegins(B, A, count2 - count1);
}
