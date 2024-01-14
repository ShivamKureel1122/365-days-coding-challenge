// Problem - https://www.interviewbit.com/problems/palindrome-list/
----------------------------------------------------------------
ListNode* reverse(ListNode* head) {
    ListNode *prev = NULL, *next = NULL;
    while(head != NULL) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    } return prev;
}

int Solution::lPalin(ListNode* A) {
//with stack 
    /* ListNode* temp = A;
    stack<int> reverse;
    while(temp != NULL) {
        reverse.push(temp->val);
        temp = temp->next;
    }
    temp = A;
    while(temp != NULL) {
        if(temp->val != reverse.top()) return 0;
        reverse.pop();
        temp = temp->next;
    } return 1; */

//without stack
    ListNode *fast = A, *slow = A;
    while(fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    //ListNode* newHead = reverse(slow->next);
    ListNode *h1 = A, *h2 = reverse(slow->next);
    while(h2 != NULL) {
        if(h1->val != h2->val) return 0;
        h1 = h1->next;
        h2 = h2->next;
    } return 1;
}
