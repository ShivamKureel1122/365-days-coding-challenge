// Problem - https://www.interviewbit.com/problems/balanced-binary-tree/
___________________________________________________________________________
// TC -> O(N)    SC -> O(N)
int height(TreeNode* root) {
    if(root == NULL) return 0; // base case
    
    int l = height(root->left); // recursively finding the left max height
    if(l == -1) return -1;
    
    int r = height(root->right); // recursively finding the right max height
    if(r == -1) return -1;
    
    if(abs(l-r) > 1) return -1; // return -1 if (left - right) exceeds 1
    return 1 + max(l, r); // return the maximum height + 1
}

int Solution::isBalanced(TreeNode* A) {
    return height(A) > 0 ? 1 : 0;
} 
