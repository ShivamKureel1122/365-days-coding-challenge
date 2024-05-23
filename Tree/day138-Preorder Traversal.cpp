// Problem - https://www.interviewbit.com/problems/preorder-traversal/
________________________________________________________________________
// TC -> O(N)     SC -> O(N) 
/* void fun(TreeNode* node, vector<int>& v) {   // recursive approach
    if(node != NULL) {
        v.push_back(node->val);
        fun(node->left, v);
        fun(node->right, v);
    } 
} */

vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> preorder;
    vector<TreeNode*> st;
    
    st.push_back(A);
    while(st.size()) {
        TreeNode* node = st.back();
        st.pop_back();
        preorder.push_back(node->val);
        
        if(node->right) {
            st.push_back(node->right);
        }
        if(node->left) {
            st.push_back(node->left);
        }
    }
    
    return preorder; 
    
    
    /* vector<int> v;
    fun(A, v);
    return v; */
}
