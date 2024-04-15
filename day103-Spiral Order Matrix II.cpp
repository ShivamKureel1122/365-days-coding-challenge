// Problem - https://www.interviewbit.com/problems/spiral-order-matrix-ii/
__________________________________________________________________
// TC -> O(A*A), SC -> O(1)
vector<vector<int> > Solution::generateMatrix(int A) {
    int l = 0, t = 0, r = A-1, b = A-1;
    vector<vector<int>> res(A, vector<int>(A));
    int val = 1;
    
    while(l <= r && t <= b) {
        for(int i=l; i<=r; i++) {
            res[t][i] = val++;
        }
        t++;
        
        for(int i=t; i<=b; i++) {
            res[i][r] = val++;
        }
        r--;
        
        for(int i=r; t <= b && i>=l; i--) {
            res[b][i] = val++;
        }
        b--;
        
        for(int i=b; l <= r && i>=t; i--) {
            res[i][l] = val++;
        }
        l++;
    }
    
    return res;
}
