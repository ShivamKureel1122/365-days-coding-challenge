// Problem - https://www.interviewbit.com/problems/path-sum/
_______________________________________________________________
// TC -> O(N)    SC -> O(N)
int Solution::hasPathSum(TreeNode* A, int B) {
    queue<pair<TreeNode*, int>> q;
    q.push({A, A->val});
    
    while(!q.empty()) {
        int n = q.size();
        
        for(int i=0; i<n; i++) {
            auto node = q.front();
            q.pop();
            auto curr = node.first;
            
            if(node.second == B && !curr->left && !curr->right) {
                return 1;
            }
            else {
                if(curr->left) {
                    q.push({curr->left, node.second + curr->left->val});
                }
                if(curr->right) {
                    q.push({curr->right, node.second + curr->right->val});
                }
            }
        }
    }
    
    return 0;
}
