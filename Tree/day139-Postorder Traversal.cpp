// Problem - https://www.interviewbit.com/problems/postorder-traversal/
__________________________________________________________________________
// TC -> O(N)     SC -> O(N)
// Using one stack
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> postOrder;
    stack<TreeNode*> st;
    TreeNode* curr = A;
    
    while(curr || !st.empty()) {
        if(curr) {
            st.push(curr);
            curr = curr->left;
        }
        else {
            TreeNode* node = st.top()->right;
            
            if(node == NULL) {
                node = st.top();
                st.pop();
                postOrder.push_back(node->val);
                
                while(!st.empty() && node == st.top()->right) {
                    node = st.top();
                    st.pop();
                    postOrder.push_back(node->val);
                }
            }
            else {
                curr = node;
            }
        }
    }
    
    return postOrder;
}
