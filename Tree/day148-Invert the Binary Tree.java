// Problem - https://www.interviewbit.com/problems/invert-the-binary-tree/
__________________________________________________________
// TC -> O(N)    SC -> O(N)
public class Solution {
    public TreeNode invertTree(TreeNode A) {
        if(A == null) return A;
        
        TreeNode left = invertTree(A.left);
        TreeNode right = invertTree(A.right);
        
        A.left = right;
        A.right = left;
        
        return A;
    }
}
