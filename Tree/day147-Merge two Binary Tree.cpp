// Problem - https://www.interviewbit.com/problems/merge-two-binary-tree/
______________________________________________________________
 // TC -> O(N)    SC -> O(N)
TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    if(A == nullptr) return B;
    if(B == nullptr) return A;
    
    A->val += B->val;
    
    A->left = solve(A->left, B->left);
    A->right = solve(A->right, B->right);
    
    return A;
}
