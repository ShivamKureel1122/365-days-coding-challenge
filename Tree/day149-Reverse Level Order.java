// Problem - https://www.interviewbit.com/problems/reverse-level-order/
__________________________________________________________________________
// TC -> O(N)    SC -> O(N)
public class Solution {
    public ArrayList<Integer> solve(TreeNode A) {
        ArrayList<Integer> reverseTraversal = new ArrayList<> ();
        if(A == null) return reverseTraversal;
        
        Queue<TreeNode> q = new LinkedList<> ();
        q.add(A);
        
        while(!q.isEmpty()) {
            int n = q.size();
            int[] level = new int[n];
            
            for(int i=0; i<n; i++) {
                TreeNode curr = q.poll();
                level[n-1-i] = curr.val;
                
                if(curr.left != null) {
                    q.add(curr.left);
                }
                if(curr.right != null) {
                    q.add(curr.right);
                }
            }
            
            for(int i=0; i<n; i++) {
                reverseTraversal.add(level[i]);
            } 
        }
        
        Collections.reverse(reverseTraversal);
        return reverseTraversal;
    }
} 
