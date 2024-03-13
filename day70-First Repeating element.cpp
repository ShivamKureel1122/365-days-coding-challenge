// Problem - https://www.interviewbit.com/problems/first-repeating-element/
---------------------------------------------------------
int Solution::solve(vector<int> &A) {
    unordered_map<int, int> mp;
    int n = A.size();
    int idx = INT_MAX;
    
    for(int i=0; i<n; i++) {
        if(!mp[A[i]]) {
            mp[A[i]] = i+1;
        }
        else {
            idx = min(mp[A[i]]-1, idx);
        }
    }
    
    return (idx == INT_MAX) ? -1 : A[idx];
}
