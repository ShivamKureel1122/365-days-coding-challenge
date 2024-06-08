// Problem - https://www.interviewbit.com/problems/path-to-given-node/
________________________________________________________________________
void helper(TreeNode* root, vector<int> v, int B, vector<int>& res) {
    if(!res.size()) {
        if(!root) return;
        v.push_back(root->val);
        
        if(root->val == B) {
            res = v;
            return;
        }
        if(!root->left && !root->right) {
            return;
        }
    
        helper(root->left, v, B, res);
        helper(root->right, v, B, res);
    }
}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> v, res;
    helper(A, v, B, res);
    return res;
} 
