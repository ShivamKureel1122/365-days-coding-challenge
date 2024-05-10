// Problem - https://www.interviewbit.com/problems/longest-subarray-length/
________________________________________________________
// TC -> O(N), SC -> O(N)
int Solution::solve(vector<int> &A) {
    int n = A.size();
    unordered_map<int, int> mp;
    int sum = 0, ans = 0;
    
    for(int i=0; i<n; i++) {
        sum += A[i] ? 1 : -1;
        
        if(sum == 1) {
            ans = i+1;
        }
        
        if(mp.find(sum) == mp.end()) {
            mp[sum] = i;
        } 
        
        if(mp.find(sum-1) != mp.end()) {
            ans = max(ans, i-mp[sum-1]);
        }
    }
    
    return ans; 
     
}
