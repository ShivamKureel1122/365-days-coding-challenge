// Problem - https://www.interviewbit.com/problems/min-depth-of-binary-tree/
_______________________________________________________________________________
// TC -> O(N)   SC -> O(N)
int Solution::minDepth(TreeNode* A) {
    if(A == nullptr) return 0;
    int depth = 0;
    queue<TreeNode*> q;
    q.push(A);
    
    // BFS Traversal
    while(!q.empty()) {
        int n = q.size();  // size of queue
        for(int i=0; i<n; i++) {  // loop n times over the queue
            TreeNode* curr = q.front();
            q.pop();
            
            //if a node is encountered which has no child nodes then return depth+1
            if(!curr->left && !curr->right) {
                return ++depth;
            }
            
            //push the left and right nodes into the queue 
            if(curr->left) {
                q.push(curr->left);
            }
            if(curr->right) {
                q.push(curr->right);
            }
        }
        depth++;
    }
    
    return depth;
}
