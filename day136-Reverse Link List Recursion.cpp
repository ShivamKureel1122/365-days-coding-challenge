// Problem - https://www.interviewbit.com/problems/reverse-link-list-recursion/
_________________________________________________________________________
// TC -> O(N)    SC -> O(N) 
ListNode* Solution::reverseList(ListNode* A) {
    //base case
    if(!A || !A->next) return A;
    
    ListNode* newHead = reverseList(A->next);
    
    //reversing the list by changing the links
    A->next->next = A;
    A->next = NULL;
    
    //returning the head of the linked list after reversing it
    return newHead;
}
