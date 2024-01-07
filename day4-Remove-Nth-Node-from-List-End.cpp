// Problem - https://www.interviewbit.com/problems/remove-nth-node-from-list-end/
------------------------------------------------------------------------------
ListNode* removeNode(ListNode* head, int num) {
    ListNode* ptr = head, *temp;
    if(num == 1) {
        temp = ptr;
        ptr = ptr->next;
        head = ptr;
        temp->next = NULL;
        delete temp;
    } else {
        num -= 1;
        while(num) {
            num -= 1;
            ptr = ptr->next;
        }
        temp = ptr->next;
        ptr->next = ptr->next->next;
        temp->next = NULL;
        delete temp;
    } return head;
}
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* temp = A;
    int size = 0;
    while(temp != NULL) {
        size++;
        temp = temp->next;
    }
    if(size > B)
        return removeNode(A, size-B);
    else 
        return removeNode(A, 1);
} 
