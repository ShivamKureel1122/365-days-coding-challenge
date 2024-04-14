// Problem - https://www.interviewbit.com/problems/spiral-order-matrix-i/
_____________________________________________________________________
// TC -> O(N * M), SC -> O(1)
vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int n = A.size(), m = A[0].size();
    int l = 0, r = m-1, t = 0, b = n-1;
    vector<int> res;
    
    while(l <= r && t <= b) {
        for(int i=l; i<=r; i++) {
            res.push_back(A[t][i]);
        }
        t++;
        
        for(int i=t; i<=b; i++) {
            res.push_back(A[i][r]);
        }
        r--;
        
        if(t <= b) {
            for(int i=r; i>=l; i--) {
                res.push_back(A[b][i]);
            }
        }
        b--;
        
        if(l <= r) {
            for(int i=b; i>=t; i--) {
                res.push_back(A[i][l]);
            }
        }
        l++;
    }
    
    return res;
}
