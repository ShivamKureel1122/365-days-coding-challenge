// Problem - https://www.interviewbit.com/problems/sum-root-to-leaf-numbers/
_______________________________________________________________________
// TC -> O(N)    SC -> O(N)
void helper(TreeNode* root, int a, int& sum) {
    if(root == nullptr) return;
    if(!root->left && !root->right) {
        sum += (((a * 10) + root->val) % 1003);
    }
    helper(root->left, ((a * 10) + root->val) % 1003, sum);
    helper(root->right, ((a * 10) + root->val) % 1003, sum);
}
int Solution::sumNumbers(TreeNode* A) {
    int sum = 0;
    helper(A, 0, sum);
    return sum % 1003;
} 
