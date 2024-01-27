// Problem - https://www.interviewbit.com/problems/insertion-sort-list/
------------------------------------------------------------
ListNode* Solution::insertionSortList(ListNode* A) {
//Using Array
    /*vector<int> arr;
    ListNode* temp = A;
    while(temp != NULL) {
        arr.push_back(temp->val);
        temp = temp->next;
    }
    int len = arr.size();
    for(int i=0; i<len; i++) {
        int j = i;
        while(j>=0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
    temp = A;
    for(int num : arr) {
        temp->val = num;
        temp = temp->next;
    }
    return A; */

//Without using Array
    ListNode* dummyHead = new ListNode(0);
    ListNode *curr = A, *prev = dummyHead, *ptr;
    dummyHead->next = A;
    
    while(curr != NULL) {
        if(curr->val < prev->val) {
            ptr = dummyHead;
            while(ptr->next->val < curr->val) {
                ptr = ptr->next;
            }
            prev->next = curr->next;
            curr->next = ptr->next;
            ptr->next = curr;
        }
        prev = curr;
        curr = curr->next;
    }
     return dummyHead->next;
}
