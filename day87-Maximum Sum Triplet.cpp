// Problem - https://www.interviewbit.com/problems/maximum-sum-triplet/
------------------------------------------------------------------------
int Solution::solve(vector<int> &A) {
    int n = A.size(), ans = 0;
    vector<int> suffArr(n, 0);
    set<int> st;
    
    suffArr[n-1] = A[n-1];
    for(int i=n-2; i>=0; i--) {
        suffArr[i] = max(A[i], suffArr[i+1]);
    }
    
    for(int i=0; i<n-1; i++) {
        st.insert(A[i]);
        
        auto it = st.lower_bound(A[i]);
        it--;
        
        if(it != st.end() && *it < A[i] && A[i] < suffArr[i+1]) {
            ans = max(ans, (*it + A[i] + suffArr[i+1]));
        }
    }
    
    return ans;
}
