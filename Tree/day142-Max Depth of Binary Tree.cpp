// Problem - https://www.interviewbit.com/problems/max-depth-of-binary-tree/
________________________________________________________________
// TC -> O(N)     SC -> O(N)
int Solution::maxDepth(TreeNode* A) {
    if(A == nullptr) return 0;
    // ans -> 1 + max(leftHeight, rightHeight)
    return 1 + max(maxDepth(A->left), maxDepth(A->right));
}
