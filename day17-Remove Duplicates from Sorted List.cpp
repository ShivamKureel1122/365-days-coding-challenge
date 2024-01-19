// Problem - https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/

ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* temp = A;
    while(temp != NULL && temp->next != NULL) {
        (temp->val == temp->next->val) ? temp->next = temp->next->next : temp = temp->next;
    } return A;
}
