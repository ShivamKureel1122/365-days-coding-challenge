// Problem - https://www.interviewbit.com/problems/vertical-order-traversal-of-binary-tree/
_____________________________________________________________________________
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    map<int, vector<int>> mp;
    queue<pair<TreeNode*, int>> q;
    vector<vector<int>> res;
    
    if(A == NULL) return res;
    
    q.push({A, 0});
    
    while(!q.empty()) {
        auto temp = q.front();
        q.pop();
        
        TreeNode* curr = temp.first;
        int vertical = temp.second;
        
        mp[vertical].push_back(curr->val);
        
        if(curr->left) {
            q.push({curr->left, vertical-1});
        }
        if(curr->right) {
            q.push({curr->right, vertical+1});
        }
    }
    
    for(auto &i: mp) {
        res.push_back(i.second);
    }
    
    return res;
}
