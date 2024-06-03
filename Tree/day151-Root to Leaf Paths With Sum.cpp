// Problem - https://www.interviewbit.com/problems/root-to-leaf-paths-with-sum/
__________________________________________________________________________________
void helper(vector<int> v, int sum, TreeNode* root, int B, vector<vector<int>>& res) {
    sum += root->val;
    v.push_back(root->val);
    
    if(!root->left && !root->right) {
        if(sum == B) res.push_back(v);
        return;
    }
    
    if(root->left != NULL) {
        helper(v, sum, root->left, B, res);
    }
    if(root->right != NULL) {
        helper(v, sum, root->right, B, res);
    }
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    if(A == NULL) return {};
    vector<vector<int>> res;
    vector<int> v;
    helper(v, 0, A, B, res);
    return res;
} 
