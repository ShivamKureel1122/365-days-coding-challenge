// Problem - https://www.interviewbit.com/problems/longest-common-prefix/
________________________________________________________________
// TC -> O(N), SC -> O(1)
string Solution::longestCommonPrefix(vector<string> &A) {
    int n = A.size();
    string ans = A[0];
    
    for(int i=1, j; i<n; i++) {
        int m = min(A[i].size(), ans.size());
        for(j=0; j < m && A[i][j] == ans[j]; j++);
        ans = A[i].substr(0, j);
    }
    
    return ans;
}
