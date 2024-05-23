// Problem - https://www.interviewbit.com/problems/inorder-traversal/
_____________________________________________________________
// TC -> O(N)     SC -> O(N)
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> st;
    
    while(!st.empty() || A != NULL) {
        if(A != NULL) {
            st.push(A);
            A = A->left;
        }
        else {
            A = st.top();
            st.pop();
            ans.push_back(A->val);
            A = A->right;
        }
    }
    
    return ans; 
}
