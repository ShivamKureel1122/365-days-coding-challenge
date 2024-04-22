// Problem - https://www.interviewbit.com/problems/subarrays-with-distinct-integers/
____________________________________________________________________
// TC -> O(n), SC -> O(n)
int subarraysCount(vector<int> &A, int k) {
    int n = A.size(), count = 0;
    unordered_map<int, int> mp;
    
    for(int i=0, j=0; j<n; j++) {
        mp[A[j]]++;
        
        while(mp.size() > k) {
            mp[A[i]]--;
            if(mp[A[i]] == 0) {
                mp.erase(A[i]);
            }
            i++;
        }
        
        count += j - i + 1;
    }
    return count;
}
int Solution::solve(vector<int> &A, int k) {
    return subarraysCount(A, k) - subarraysCount(A, k-1);
}
