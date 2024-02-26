// Problem - https://www.interviewbit.com/problems/list-cycle/
--------------------------------------------------------------
ListNode* Solution::detectCycle(ListNode* head) {
    /* map<ListNode*, int> mp;
    ListNode *temp = head;
    
    while(temp && mp[temp] != 1) {
        mp[temp]++;
        temp = temp->next;
    }
    
    if(temp) return temp;
    return NULL; */
    
    if(!head || !head->next) return NULL;
    ListNode *slow = head, *fast = head;
    
    while(fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast) {
            ListNode* begin = head;
            
            while(slow != begin) {
                slow = slow->next;
                begin = begin->next;
            }
            
            return begin;
        }
    }
    return NULL; 
}
