// Problem - https://www.interviewbit.com/problems/reverse-linked-list/
------------------------------------------------------
ListNode* Solution::reverseList(ListNode* head) {
    ListNode *curr = NULL, *prev = NULL;
    while(head != NULL) {
        curr = head;
        head = head->next;
        curr->next = prev;
        prev = curr;
    } return curr;
}
