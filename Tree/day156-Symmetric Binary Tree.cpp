// Problem - https://www.interviewbit.com/problems/symmetric-binary-tree/
___________________________________________________________________________
bool helper(TreeNode* root1, TreeNode* root2) {
    if(!root1 & !root2) return true;
    if(!root1 || !root2) return false;
    return root1->val == root2->val && helper(root1->left, root2->right) && helper(root1->right, root2->left);
}
int Solution::isSymmetric(TreeNode* A) {
    return helper(A->left, A->right);
}
