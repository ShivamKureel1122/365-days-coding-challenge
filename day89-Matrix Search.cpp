// Problem - https://www.interviewbit.com/problems/matrix-search/
--------------------------------------------------------------------------
int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // TC -> Avg case - O(log(n) * log(m))  ,  Worst case - O(n * log(m))
    // SC -> O(1)
    int n = A.size(), m = A[0].size();
    int L = 0, H = n-1;
    
    while(L <= H) {
        int Mid = (L + (H - L) / 2);
        
        if(A[Mid][0] < B) {
            int l = 0, h = m-1;
            
            while(l <= h) {
                int mid = (l + (h - l) / 2);
                
                if(A[Mid][mid] == B) return 1;
                else if(A[Mid][mid] > B) h = mid-1;
                else l = mid+1;
            }
            
            L = Mid+1;
        }
        
        else if(A[Mid][0] > B) H = Mid-1;
        else return 1;
    }
    
    return 0; 
    
    // Optimal Solution
    /* int l = 0, h = (n*m)-1;
    
    while(l <= h) {
        int mid = (l + (h - l) / 2);
        int i = mid / m, j = mid % m;
        
        if(A[i][j] == B) return 1;
        else if(A[i][j] > B) h = mid-1;
        else l = mid+1;
    }
    
    return 0; */
}
