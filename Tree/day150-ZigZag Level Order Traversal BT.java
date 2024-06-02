// Problem - https://www.interviewbit.com/problems/zigzag-level-order-traversal-bt/
_________________________________________________________________________________
// TC -> O(N)    SC -> O(N)
public class Solution {
    public ArrayList<ArrayList<Integer>> zigzagLevelOrder(TreeNode A) {
        ArrayList<ArrayList<Integer>> zigzagTraversal = new ArrayList<>();
        if(A == null) return zigzagTraversal;
        
        Boolean flag = true;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(A);
        
        while(!q.isEmpty()) {
            int n = q.size();
            ArrayList<Integer> level = new ArrayList<>();
            
            for(int i=0; i<n; i++) {
                TreeNode curr = q.poll();
                level.add(curr.val);
                
                if(curr.left != null) {
                    q.add(curr.left);
                }
                if(curr.right != null) {
                    q.add(curr.right);
                }
            }
            
            if(flag) {
                zigzagTraversal.add(level);
            }
            else {
                Collections.reverse(level);
                zigzagTraversal.add(level);
            }
            
            flag = !flag;
        }
        
        return zigzagTraversal;
    }
}
