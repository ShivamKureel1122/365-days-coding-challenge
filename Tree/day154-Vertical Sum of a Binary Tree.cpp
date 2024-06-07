// Problem - https://www.interviewbit.com/problems/vertical-sum-of-a-binary-tree/
___________________________________________________________________________________
// TC -> O(N)    SC -> O(N)
vector<int> Solution::verticalSum(TreeNode* A) {
    map<int, int> mp;
    queue<pair<TreeNode*, int>> q;
    q.push({A, 0});
    
    while(!q.empty()) {
        auto temp = q.front();
        q.pop();
        
        mp[temp.second] += temp.first->val;
        if(temp.first->left) {
            q.push({temp.first->left, temp.second-1});
        }
        if(temp.first->right) {
            q.push({temp.first->right, temp.second+1});
        }
    }
    
    vector<int> ans;
    for(auto &i: mp) {
        ans.push_back(i.second);
    }
    
    return ans;
}
