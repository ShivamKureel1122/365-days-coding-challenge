// Problem - https://www.interviewbit.com/problems/diffk-ii/
-------------------------------------------------------------
int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<int, int> mp;
    int n = A.size(), i;
    
    for(i=0; i<n; i++) mp[A[i]] = i;
    
    for(i=0; i<n; i++) {
        auto it = mp.find(A[i] + B);
        
        if(it != mp.end() && it->second != i) {
            return 1;
        }
    }
    
    return 0;
}
