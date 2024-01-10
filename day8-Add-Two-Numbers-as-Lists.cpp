// Problem - https://www.interviewbit.com/problems/add-two-numbers-as-lists/
-------------------------------------------------------------------------
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* fakeHead = new ListNode(0);
    ListNode *list1 = A, *list2 = B, *temp = fakeHead;
    int carry = 0;
    
    while(list1 != NULL || list2 != NULL || carry != 0) {
        int sum = 0;
        if(list1 != NULL) {
            sum += list1->val;
            list1 = list1->next;
        }
        if(list2 != NULL) {
            sum += list2->val;
            list2 = list2->next;
        }
        sum += carry;
        carry = sum / 10;
        ListNode* newNode = new ListNode(sum % 10);
        temp->next = newNode;
        temp = temp->next;
    } 
    return fakeHead->next;
}
