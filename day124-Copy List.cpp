// Problem - https://www.interviewbit.com/problems/copy-list/
_______________________________________________________________
// TC -> O(N), SC -> O(N)
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    RandomListNode* dummy = new RandomListNode(0), *curr = dummy;
    unordered_map<RandomListNode*, RandomListNode*> mp;
    
    //traversing the linked list
    while(A) {
        //creating new node and assigning its address in the next of the curr pointer ;
        curr->next = new RandomListNode(A->label);
        curr = curr->next;
        //creating a map in which key is the node of the oldList and the node of the newList is the value of the key
        mp[A] = curr;
        A = A->next;
    }
    
    //traversing the map and initializing the random pointer of each node of the new List
    for(auto &i: mp) {
        i.second->random = i.first->random ? mp[i.first->random] : NULL;
    }
    
    return dummy->next;
}
